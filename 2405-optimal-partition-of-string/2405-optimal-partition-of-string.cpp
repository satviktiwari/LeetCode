class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int> freq;
        int count = 1;
        for (int k = 0; k < s.size(); k++) {
            if (!freq[s[k]]) {
                freq[s[k]]++;
            }
            else {
                count++;
                freq.clear();
                freq[s[k]]++;
            }
        }
        return count;
    }
};