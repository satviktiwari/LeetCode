class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int x = cost[0];
        int y = cost[1];
        int n = cost.size();
        if(n <= 2){
            return min(x, y);
        }
        for(int i = 2; i < n; i++){
            int temp = cost[i] + min(x, y);
            x = y;
            y = temp;
        }
        return min(x, y);
    }
};