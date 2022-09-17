class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>mp;
        for(int i = 0; i < paths.size(); i++){
            string str = paths[i][0];
            mp[str]++;
        }
        string ans = "";
        for(int i = 0; i < paths.size(); i++){
            for(int j = 0; j < 2; j++){
                if(mp.find(paths[i][j]) == mp.end()){
                    ans = paths[i][j];
                    break;
                }
            }
        }
        return ans;
    }
};