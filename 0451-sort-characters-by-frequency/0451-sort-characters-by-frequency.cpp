class Solution {
public:
    string frequencySort(string s) {
        unordered_map<int,int>mp;
        for(auto it : s){
            mp[it]++;
        }
        priority_queue<pair<int, char>>pq;
        for(auto it : mp){
            pq.push({it.second, it.first});
        }
        string ans = "";
        while(!pq.empty()){
            pair x = pq.top();
            pq.pop();
            char ch = x.second;
            int occ = x.first;
            while(occ--){
                ans += ch;
            }
        }
        return ans;
    }
};