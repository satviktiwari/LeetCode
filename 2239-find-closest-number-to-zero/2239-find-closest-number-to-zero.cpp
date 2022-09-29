class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = 0, mn = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int diff = abs(nums[i]-0);
            if(diff < mn){
                mn = diff;
                ans = nums[i];
            }
            if(diff == mn){
                ans = max(ans, nums[i]);
            }
        }
        return ans;
    }
};