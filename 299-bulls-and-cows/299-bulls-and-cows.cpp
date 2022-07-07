class Solution {
public:
    string getHint(string secret, string guess) {
        int cb = 0;
        unordered_map<char, int>mp1, mp2;
        for(int i = 0; i < secret.size(); i++){
            if(secret[i] == guess[i]){
                cb++;
            }
            else{
                mp1[secret[i]]++;
                mp2[guess[i]]++;
            }
        }
        string ans = "";
        ans += to_string(cb);
        ans += 'A';
        int cc = 0;
        for(auto it1 : mp1){
            char ch = it1.first;
            int c = it1.second;
            if(mp2.find(ch) != mp2.end()){
                cc += min(c, mp2[ch]);
            }
        }
        ans += to_string(cc);
        ans += 'B';
        return ans;
    }
};