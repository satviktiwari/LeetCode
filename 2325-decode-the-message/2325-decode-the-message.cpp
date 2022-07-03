class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char>mp;
        int idx = 0;
        for(int i = 0; i < key.size(); i++){
            if(key[i] != ' ' and mp.find(key[i]) == mp.end()){
                mp[key[i]] = idx + 'a';
                idx++;
            }
            if(mp.size() == 26){
                break;
            }
        }
        // for(auto it : mp){
        //     cout << it.first << " : " << it.second << endl;
        // }
        string ans = "";
        for(int i = 0; i < message.size(); i++){
            if(message[i] == ' '){
                ans += ' ';
            }
            else{
                ans += mp[message[i]];
            }
        }
        return ans;
    }
};