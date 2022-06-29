class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = INT_MAX;
        int pr = 0;
        for(auto it : prices){
            p = min(p, it);
            pr = max(pr, it-p);
        }
        return pr;
    }
};