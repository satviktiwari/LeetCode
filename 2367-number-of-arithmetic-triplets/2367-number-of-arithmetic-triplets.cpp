class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans = 0;
        unordered_set<int>st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i]+diff;
            int y = x + diff;
            if(st.find(x) != st.end()){
                if(st.find(y) != st.end()){
                    ans++;
                }
            }
        }
        return ans;
    }
};