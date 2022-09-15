class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int>ans;
        if(n % 2 != 0){
            return ans;
        }
        sort(changed.begin(), changed.end());
        vector<int>temp;
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++){
            mp[changed[i]]++;
        }
        for(int i = 0; i < n; i++){
            int x = changed[i];
            if(mp[x]){
                mp[x]--;
                ans.push_back(x);
                if(mp[x*2]){
                    mp[x*2]--;
                }
                else{
                    return temp;
                }
            }
        }
        return ans;
    }
};