class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string ans = "";
        int i = 0, n = s.size();
        while(i < n){
            string temp = "";
            while(s[i] != ' ' and s[i] != '\0'){
                temp += s[i];
                i++;
            }
            i++;
            v.push_back(temp);
        }
        for(int i = 0; i < v.size(); i++){
            reverse(v[i].begin(), v[i].end());
        }
        for(int i = 0; i < v.size()-1; i++){
            ans += v[i];
            ans += ' ';
        }
        ans += v[v.size()-1];
        return ans; 
    }
};