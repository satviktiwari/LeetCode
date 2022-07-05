class Solution {
public:
int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
        }
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(s.find(nums[i]-1) == s.end()){
                int cur = nums[i];
                int streak = 1;
                while(s.find(cur+1) != s.end()){
                    streak++;
                    cur++;
                }
                ans = max(ans, streak);
            }
        }
        return ans;
    }
};