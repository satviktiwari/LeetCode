class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        vector<int>v;
        for(int i = 0; i < messages.size(); i++){
            string str = messages[i];
            int count = 0;
            for(int i = 0; i < str.size(); i++){
                if(str[i] == ' '){
                    count++;
                }
            }
            v.push_back(count+1);
        }
        unordered_map<string, int>mp;
        for(int i = 0; i < senders.size(); i++){
            string str = senders[i];
            int count = v[i];
            mp[str] += count;
        }
        string ans = "";
        int mx = INT_MIN;
        for(auto it : mp){
            if(it.second > mx){
                mx = it.second;
                ans = it.first;
            }
            else if(it.second == mx){
                ans = max(ans, it.first);
            }
        }
        return ans;
    }
};