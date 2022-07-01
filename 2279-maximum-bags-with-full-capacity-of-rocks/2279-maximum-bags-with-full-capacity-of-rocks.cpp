class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int add) {
        vector<int>v;
        for(int i = 0; i < rocks.size(); i++){
            v.push_back(capacity[i]-rocks[i]);
        }
        sort(v.begin(), v.end());
        int i = 0;
        int n = v.size();
        int count = 0;
        while(i < n){
            if(v[i] <= add){
                add -= v[i];
                count++;
            }
            else if(v[i] > add){
                break;
            }
            i++;
        }
        return count;
    }
};