class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        for(int i = 0; i < tasks.size(); i++){
            mp[tasks[i]]++;
        }
        for(auto it : mp){
            if(it.second == 1){
                return -1;
            }
        }
        int ans = 0;
        for(auto it : mp){
            int x = it.second;
            if(x % 3 == 0){
                ans += x/3;
            }
            else{
                int temp = x/3;
                if(x % 3 == 1){
                    temp--;
                }
                x -= temp*3;
                ans += temp + x/2;
            }
        }
        return ans;
    }
};