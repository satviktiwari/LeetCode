class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>pq;
        for(int i = 0; i < k; i++){
            pq.push({abs(arr[i]-x), i});
        }
        int n = arr.size();
        for(int i = k; i < n; i++){
            int temp = abs(arr[i] - x);
            if(temp < pq.top().first){
                //continue;
                pq.pop();
                pq.push({temp, i});
            }
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(arr[pq.top().second]);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};