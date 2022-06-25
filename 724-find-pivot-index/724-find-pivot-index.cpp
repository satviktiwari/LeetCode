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
            if(leftsum == cursum){
                return i;
            }
            leftsum -= nums[i];
        }
        return -1;
    }
};