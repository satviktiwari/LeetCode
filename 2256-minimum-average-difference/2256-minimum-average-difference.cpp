class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int sum = 0;
        long long int res = 0;
        long long int n = nums.size();
        for(long long int i = 0; i < n; i++){
            sum += nums[i];
        }
        long long int ssum = 0, si = 0, esum = 0, ei = 0;
        long long int ans = INT_MAX;
        for(long long int i = 0; i < n; i++){
            ssum += nums[i];
            esum = sum-ssum;
            si = i+1;
            ei = n-i-1;
            long long int x;
            if(ei){
                x = abs((ssum/si)-(esum/ei));
            }
            else{
                x = ssum/si;
            }
            if(ans > x){
                ans = x;
                res = i;
            }
        }
        return res;
    }
};
