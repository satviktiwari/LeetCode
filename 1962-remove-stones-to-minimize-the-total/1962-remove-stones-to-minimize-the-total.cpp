class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i = 0; i < piles.size(); i++){
            pq.push(piles[i]);
        }
        while(k--){
            int x = pq.top();
            pq.pop();
            int y = x/2;
            x = x-y;
            pq.push(x);
        }
        int ans = 0;
        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};