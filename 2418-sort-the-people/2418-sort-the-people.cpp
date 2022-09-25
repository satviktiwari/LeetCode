class Solution {
public:
    
    static bool comp(pair<int, string>p1, pair<int,string>p2){
        return p1.first > p2.first;
    }
    
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>v;
        for(int i = 0; i < names.size(); i++){
            v.push_back({heights[i], names[i]});
        }
        sort(v.begin(), v.end(), comp);
        vector<string>ans;
        for(int i = 0; i < v.size(); i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};