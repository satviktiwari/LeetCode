class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int num = 0;
        for(int i = 0; i < nums.size(); i++){
            num = max(num, nums[i]);
        }
        int ans = 0;
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == num){
                temp++;
                ans = max(ans, temp);
            }
            else{
                temp = 0;
            }
        }
        return ans;
    }
};