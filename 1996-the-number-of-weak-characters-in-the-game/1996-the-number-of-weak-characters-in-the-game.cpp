class Solution {
public:
    
    static bool comp(vector<int>&v1, vector<int>&v2){
        if(v1[0] == v2[0]){
            return v1[1] > v2[1];
        }
        return v1[0] < v2[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end(), comp);
        int ans = 0;
        int temp = INT_MIN;
        for(int i = arr.size()-1; i >= 0; i--){
            if(arr[i][1] < temp){
                ans++;
            }
            temp = max(temp, arr[i][1]);
        }
        return ans;
    }
};