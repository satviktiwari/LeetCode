class Solution {
public:
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>st;
        for(int i = 0; i < allowed.size(); i++){
            st.insert(allowed[i]);
        }
        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            bool flag = false;
            string str = words[i];
            for(int j = 0; j < str.size(); j++){
                if(st.find(str[j]) == st.end()){
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                ans++;
            }
        }
        return ans;
    }
};