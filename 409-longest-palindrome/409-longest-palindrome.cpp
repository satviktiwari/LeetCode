class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        int odd_count = 0;
        for(auto it : mp){
            if(it.second % 2 != 0){
                odd_count++;
            }
        }
        if(odd_count > 1){
            return s.size()-odd_count+1;
        }
        return s.size();
    }
};