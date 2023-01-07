class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int totalCost = 0;
        for(int i = 0; i < gas.size(); i++){
            totalGas += gas[i];
            totalCost += cost[i];
        }
        if(totalCost > totalGas){
            return -1;
        }
        int curGas = 0;
        int start = 0;
        for(int i = 0; i < gas.size(); i++){
            if(curGas < 0){
                start = i;
                curGas = 0;
            }
            curGas += gas[i]-cost[i];
        }
        return start;
    }
};