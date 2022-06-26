class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        bool flag1 = true, flag2 = true;
        unordered_map<char, char>mp1, mp2;
        for(int i = 0; i < s.size(); i++){
            if(mp1.find(s[i]) != mp1.end()){
                if(t[i] != mp1[s[i]]){
                    flag1 = false;
                    break;
                }
            }
            else{
                mp1[s[i]] = t[i];
            }
        }
        for(int i = 0; i < t.size(); i++){
            if(mp2.find(t[i]) != mp2.end()){
                if(s[i] != mp2[t[i]]){
                    flag2 = false;
                    break;
                }
            }
            else{
                mp2[t[i]] = s[i];
            }
        }
        if(flag1 and flag2){
            return true;
        }
        return false;
    }
};