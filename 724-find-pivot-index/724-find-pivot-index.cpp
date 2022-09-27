class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre, suf;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            pre.push_back(sum);
            sum += nums[i];
        }
        sum = 0;
        for(int i = n-1; i >= 0; i--){
            suf.push_back(sum);
            sum += nums[i];
        }
        reverse(suf.begin(), suf.end());
        for(int i = 0; i < n; i++){
            if(pre[i] == suf[i]){
                return i;
            }
        }
        return -1;
    }
};