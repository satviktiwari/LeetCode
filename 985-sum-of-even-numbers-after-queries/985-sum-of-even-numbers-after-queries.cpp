class Solution {
public:
    
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                sum += nums[i];
            }
        }
        for(int i = 0; i < queries.size(); i++){
            int a = queries[i][0], b = queries[i][1];
            int prev = nums[b];
            nums[b] += a;
            if(nums[b] % 2 == 0){
                sum += nums[b];
            }
            if(prev % 2 == 0){
                sum -= prev;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};