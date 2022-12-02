class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        if(n != m){
            return false;
        }
        unordered_map<char,int>mp1, mp2;
        unordered_set<char>s1, s2;
        for(int i = 0; i < n; i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        vector<int>v1, v2;
        for(auto it : mp1){
            v1.push_back(it.second);
            s1.insert(it.first);
        }
        for(auto it : mp2){
            v2.push_back(it.second);
            s2.insert(it.first);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        bool flag1 = (v1 == v2);
        bool flag2 = (s1 == s2);
        return flag1 and flag2;
    }
};