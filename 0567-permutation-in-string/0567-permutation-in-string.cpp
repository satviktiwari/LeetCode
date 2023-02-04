class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }
        vector<int>v1(26,0);
        for(int i = 0; i < s1.size(); i++){
            v1[s1[i]-'a']++;
        }
        for(int i = 0; i <= s2.size()-s1.size(); i++){
            vector<int>v2(26,0);
            for(int j = 0; j < s1.size(); j++){
                v2[s2[i+j]-'a']++;
            }
            if(v1 == v2){
                return true;
            }
        }
        return false;
    }
};