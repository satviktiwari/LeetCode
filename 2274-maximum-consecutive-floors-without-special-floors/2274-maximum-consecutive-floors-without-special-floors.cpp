class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        // priority_queue<int, vector<int>, greater<int>>pq;
        // for(int i = 0; i < special.size(); i++){
        //     pq.push(special[i]);
        // }
        // for(int i = 0; i < special.size(); i++){
        //     special[i] = pq.top();
        //     pq.pop();
        // }
        sort(special.begin(), special.end());
        int ans = special[0]-bottom;
        for(int i = 1; i < special.size(); i++){
            ans = max(ans, (special[i]-special[i-1]-1));
        }
        ans = max(ans, top-special[special.size()-1]);
        return ans;
    }
};