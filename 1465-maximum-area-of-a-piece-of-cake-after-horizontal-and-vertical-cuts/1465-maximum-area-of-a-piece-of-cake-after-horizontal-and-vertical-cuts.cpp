class Solution {
public:
    int maxArea(int h, int w, vector<int>& v1, vector<int>& v2) {
        int mod = 1e9+7;
        v1.push_back(0);
        v2.push_back(0);
        v1.push_back(h);
        v2.push_back(w);
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int mx1 = 0, mx2 = 0;
        for(int i = 0; i < v1.size()-1; i++){
            mx1 = max(mx1, v1[i+1]-v1[i]);
        }
        for(int i = 0; i < v2.size()-1; i++){
            mx2 = max(mx2, v2[i+1]-v2[i]);
        }
        return (long)mx1*mx2%mod;
    }
};