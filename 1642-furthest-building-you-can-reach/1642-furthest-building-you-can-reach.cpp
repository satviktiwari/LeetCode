class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int>pq;
        for(int i = 0; i < heights.size()-1; i++){
            int d = heights[i+1]-heights[i];
            if(d > 0){
                pq.push(-d);
            }
            if(pq.size() > ladders){
                int x = pq.top();
                pq.pop();
                bricks += x;
            }
            if(bricks < 0){
                return i;
            }
        }
        return heights.size()-1;
    }
};