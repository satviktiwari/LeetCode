class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        for(auto it : nums){
            sum += it;
        }
        int val = 0;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            while(x){
                val += x % 10;
                x /= 10;
            }
        }
        int ans = abs(sum-val);
        return ans;
    }
};