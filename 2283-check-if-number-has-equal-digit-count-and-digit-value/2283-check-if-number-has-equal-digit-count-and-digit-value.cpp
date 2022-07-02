class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int>mp;
        for(int i = 0; i < num.size(); i++){
            mp[num[i]]++;
        }
        // for(auto it : mp){
        //     cout << it.first << " : " << it.second << endl;
        // }
        string str = "";
        for(int i = 0; i < num.size(); i++){
            int x = mp[i+'0'];
            string temp = to_string(x);
            str += temp;
        }
        //cout << str;
        return str == num;
    }
};