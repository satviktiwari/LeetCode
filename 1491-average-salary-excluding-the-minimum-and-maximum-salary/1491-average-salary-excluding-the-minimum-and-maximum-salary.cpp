class Solution {
public:
    double average(vector<int>& salary) {
        double ans = 0;
        int mn = INT_MAX, mx = INT_MIN;
        int sum = 0;
        for(int i = 0; i < salary.size(); i++){
            mn = min(mn, salary[i]);
            mx = max(mx, salary[i]);
            sum += salary[i];
        }
        sum -= mx;
        sum -= mn;
        double m = salary.size()-2;
        m *= 1.0;
        ans = sum/m;
        return ans;
    }
};