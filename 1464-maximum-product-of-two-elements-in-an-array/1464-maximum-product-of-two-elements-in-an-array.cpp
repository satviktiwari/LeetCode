class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int a = nums[0];
        int b = nums[1];
        return (a-1)*(b-1);
    }
};