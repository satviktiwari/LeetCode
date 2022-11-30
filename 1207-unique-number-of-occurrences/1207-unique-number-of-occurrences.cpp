class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        unordered_map<int,int>nmp;
        for(auto it : mp){
            int x = it.second;
            nmp[x]++;
        }
        for(auto it : nmp){
            if(it.second > 1){
                return false;
            }
        }
        return true;
    }
};