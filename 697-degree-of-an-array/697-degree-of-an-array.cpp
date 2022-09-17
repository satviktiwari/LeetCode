class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int>v;
        int count = INT_MIN;
        for(auto it : mp){
            if(it.second > count){
                count = it.second;
            }
        }
        for(auto it : mp){
            if(it.second == count){
                v.push_back(it.first);
            }
        }
        unordered_map<int,int>first, last;
        for(int i = 0; i < nums.size(); i++){
            if(first.find(nums[i]) == first.end()){
                first[nums[i]] = i;
            }
        }
        for(int i = nums.size()-1; i >= 0; i--){
            if(last.find(nums[i]) == last.end()){
                last[nums[i]] = i;
            }
        }
        int ans = INT_MAX;
        for(int i = 0; i < v.size(); i++){
            int x = v[i];
            int a = first[x];
            int b = last[x];
            ans = min(ans, b-a);
        }
        return ans+1;
    }
};