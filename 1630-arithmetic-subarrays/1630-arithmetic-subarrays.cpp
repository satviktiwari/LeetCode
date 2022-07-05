class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<pair<int,int>>v;
        for(int i = 0; i < l.size(); i++){
            v.push_back({l[i], r[i]});
        }
        vector<bool>ans;
        for(int i = 0; i < v.size(); i++){
            vector<int>temp;
            bool flag = true;
            for(int j = v[i].first; j <= v[i].second; j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(), temp.end());
            int dif = temp[1]-temp[0];
            for(int k = 1; k < temp.size()-1; k++){
                if(dif != temp[k+1]-temp[k]){
                    flag = false;
                    break;
                }
            }
            ans.push_back(flag);
        }
        return ans;
    }
};