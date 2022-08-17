class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<string,int>mp;
        for(int i = 0; i < words.size(); i++){
            string temp = "";
            string str = words[i];
            for(int j = 0; j < str.size(); j++){
                temp += v[str[j]-'a'];
            }
            mp[temp]++;
        }
        return mp.size();
    }
};