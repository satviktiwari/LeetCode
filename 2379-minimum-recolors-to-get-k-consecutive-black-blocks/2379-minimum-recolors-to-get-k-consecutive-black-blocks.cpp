class Solution {
public:
    
    int solve(string str){
        int ans = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'B'){
                ans++;
            }
        }
        return ans;
    }
    
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int ans = INT_MAX;
        for(int i = 0; i <= n-k; i++){
            string t = blocks.substr(i, k);
            int count = solve(t);
            int temp = abs(k-count);
            ans = min(ans, temp);
        }
        return ans;
    }
};