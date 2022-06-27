class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char, int>mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        if(mp.find(letter) == mp.end()){
            return 0;
        }
        else{
            return mp[letter]*100/s.size();
        }
    }
};