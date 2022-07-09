class Solution {
public:
    
    static bool comp(pair<int, string>p, pair<int, string>q){
        if(p.first == q.first){
            return p.second > q.second;
        }
        return p.first < q.first;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto it : words){
            mp[it]++;
        }
        vector<pair<int,string>>v;
        for(auto it : mp){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), comp);
        reverse(v.begin(), v.end());
        vector<string>ans;
        for(int i = 0; i < k; i++){
            ans.push_back(v[i].second);
        }
        //sort(ans.begin(), ans.end());
        return ans;
    }
};