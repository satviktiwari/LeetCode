class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        int f=1, d=1;
        for(int i = 1; i < n; i++){
             if(nums[i] > nums[i-1]){
                 f = d + 1;
             }
            else if(nums[i] < nums[i-1]){
                d = f + 1;
            } 
        }
        return min(n, max(f, d));
    }
};
