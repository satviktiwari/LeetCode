class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i = 0; i < nums.size(); i++){
            pq.push(nums[i]);
        }
        while(!pq.empty()){
            int a = pq.top();
            pq.pop();
            if(a == 0){
                continue;
            }
            else {
                ans++;
                vector<int>v;
                while(!pq.empty()){
                    v.push_back(pq.top()-a);
                    pq.pop();
                }
                for(int i = 0; i < v.size(); i++){
                    pq.push(v[i]);
                }
            }
        }
        return ans;
    }
};