class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == key){
                mp[nums[i]]++;
            }
        }
        int mx = INT_MIN;
        int ans = 0;
        for(auto it : mp){
            if(it.second > mx){
                mx = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};