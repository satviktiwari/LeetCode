class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>st;
        for(int i = 0; i < sentence.size(); i++){
            st.insert(sentence[i]);
        }
        for(int i = 0; i < 26; i++){
            char ch = 'a'+i;
            if(st.find(ch) == st.end()){
                return false;
            }
        }
        return true;
    }
};