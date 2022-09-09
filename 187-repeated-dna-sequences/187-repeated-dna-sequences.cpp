class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        if(s.size() < 10){
            return ans;
        }
        unordered_map<string,int>mp;
        unordered_set<string>st;
        for(int i = 0; i <= s.size()-10; i++){
            string str = s.substr(i, 10);
            mp[str]++;
        }
        for(auto it : mp){
            if(it.second > 1){
                if(st.find(it.first) == st.end()){
                    ans.push_back(it.first);
                    st.insert(it.first);
                }
            }
        }
        return ans;
    }
};