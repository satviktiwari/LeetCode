class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int, set<char>>mp;
        string str1 = "", str2 = "";
        for(int i = 0; i < rings.size(); i+=2){
            str1 += rings[i];
        }
        for(int i = 1; i < rings.size(); i+=2){
            str2 += rings[i];
        }
        for(int i = 0; i < str1.size(); i++){
            int n = str2[i] - '0';
            char ch = str1[i];
            mp[n].insert(ch);
        }
        int ans = 0;
        for(auto it : mp){
            if(it.second.size() == 3){
                ans++;
            }
        }
        return ans;
    }
};