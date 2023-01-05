class Solution {
public:
    
    static bool comp(vector<int>&v1, vector<int>&v2){
        return v1[1] < v2[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 0, temp = INT_MIN;
        sort(points.begin(), points.end(), comp);
        for(int i = 0; i < points.size(); i++){
            if(temp != INT_MIN and points[i][0] <= temp){
                continue;
            }
            temp = points[i][1];
            ans++;
        }
        return ans;
    }
};