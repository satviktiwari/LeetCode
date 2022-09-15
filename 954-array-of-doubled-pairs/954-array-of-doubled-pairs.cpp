class Solution {
public:
    
    static bool comp(int a, int b){
        return abs(a) < abs(b);
    }
    
    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(), arr.end(), comp);
        unordered_map<int,int>mp;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        for(int i = 0; i < arr.size(); i++){
            if(mp[arr[i]] == 0){
                continue;
            }
            if(mp[arr[i]*2] == 0){
                return false;
            }
            mp[arr[i]]--;
            mp[arr[i]*2]--;
        }
        return true;
    }
};