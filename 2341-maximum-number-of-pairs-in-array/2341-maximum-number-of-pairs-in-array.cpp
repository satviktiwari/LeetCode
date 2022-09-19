class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(auto it : nums){
            mp[it]++;
        }
        int a = 0;
        int b = 0;
        for(auto it : mp){
            int x = it.second;
            if(x % 2 != 0){
                b++;
            }
            a += x/2;
        }
        v.push_back(a);
        v.push_back(b);
        return v;
    }
};