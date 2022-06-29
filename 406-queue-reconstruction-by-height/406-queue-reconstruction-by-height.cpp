class Solution {
public:
    
    static bool comp(vector<int>v1, vector<int>v2){
        if(v1[0] == v2[0]){
            return v1[1] < v2[1];
        }
        return v1[0] > v2[0];
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), comp);
        vector<vector<int>>ans;
        for(int i = 0; i < people.size(); i++){
            int idx = people[i][1];
            ans.insert(ans.begin()+idx, people[i]);
        }
        return ans;
    }
};