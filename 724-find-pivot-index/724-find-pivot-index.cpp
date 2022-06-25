class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        int cursum = 0, leftsum = sum;
        for(int i = 0; i < nums.size(); i++){
            cursum += nums[i];
            leftsum -= nums[i];
            if((leftsum + nums[i]) == cursum){
                return i;
            }
        }
        return -1;
    }
};