class Solution {
public:
    
    static bool comp(vector<int>v1, vector<int>v2){
        return v1[0] < v2[0];
    }
    
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int, vector<int>>mp;
        for(int i = 0; i < items1.size(); i++){
            int a = items1[i][0];
            int b = items1[i][1];
            mp[a].push_back(b);
        }
        for(int i = 0; i < items2.size(); i++){
            int a = items2[i][0];
            int b = items2[i][1];
            mp[a].push_back(b);
        }
        unordered_map<int,int>nmp;
        for(auto it : mp){
            int sum = 0;
            vector<int>v = it.second;
            int x = it.first;
            for(int i = 0; i < v.size(); i++){
                sum += v[i];
            }
            nmp[x] = sum;
        }
        vector<vector<int>>ans;
        for(auto it : nmp){
            int q = it.first;
            int w = it.second;
            ans.push_back({q, w});
        }
        sort(ans.begin(), ans.end(), comp);
        return ans;
    }
};