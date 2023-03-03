class Solution {
public:
    int strStr(string s, string t){
        int n = s.size();
        int m = t.size();
        if(m > n){
            return -1;
        }
        if(m == n){
            if(s == t){
                return 0;
            }
            else{
                return -1;
            }
        }
        for(int i = 0; i <= n-m; i++){
            int j = 0;
            for(; j < m; j++){
                if(s[i+j] != t[j]){
                    break;
                }
            }
            if(j == m){
                return i;
            }
        }
        return -1;
    }
};