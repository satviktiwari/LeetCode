class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag1 = isupper(word[0]);
        bool flag2 = true, flag3 = true;
        for(int i = 1; i < word.size(); i++){
            if(isupper(word[i])){
                flag2 = false;
            }
            else{
                flag3 = false;
            }
        }
        return (flag1 and flag3) or flag2;
    }
};