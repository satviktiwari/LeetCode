class Solution {
public:
    bool validUtf8(vector<int>& a) {
        int rBytes = 0;
        for(int val: a) {
            if(rBytes == 0) {
                if((val >> 5) == (0b110)) rBytes = 1;
                else if((val >> 4) == (0b1110)) rBytes = 2;
                else if((val >> 3) == (0b11110)) rBytes = 3;
                else if((val >> 7)) return 0;
            }
            else {
                if((val >> 6) == (0b10)) rBytes--;
                else return 0;
            }
        }
        return (rBytes == 0);
    }
};