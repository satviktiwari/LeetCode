class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        string str1 = "", str2 = "";
        for(int i = 0; i < n/2; i++){
            str1 += s[i];
        }
        for(int i = n/2; i < n; i++){
            str2 += s[i];
        }
        unordered_set<char>st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        st.insert('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');
        int c1 = 0, c2 = 0;
        for(auto it : str1){
            if(st.find(it) != st.end()){
                c1++;
            }
        }
        for(auto it : str2){
            if(st.find(it) != st.end()){
                c2++;
            }
        }
        return c1 == c2 ? true : false;
    }
};