class Solution {
public:
    string sortString(string s) {
        map<char,int>mp;
        for(auto it : s){
            mp[it]++;
        }
        string ans = "";
        bool flag = false;
        while(flag == false){
            for(int i = 0; i < 26; i++){
                if(mp[i+'a']){
                    ans += (i+'a');
                    mp[i+'a']--;
                }
            }
            for(int i = 25; i >= 0; i--){
                if(mp[i+'a']){
                    ans += (i+'a');
                    mp[i+'a']--;
                }
            }
            int count = 0;
            for(auto it : mp){
                count += it.second;
            }
            if(count == 0){
                flag = true;
            }
        }
        return ans;
    }
};