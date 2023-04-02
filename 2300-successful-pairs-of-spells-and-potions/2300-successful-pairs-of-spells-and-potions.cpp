class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans(spells.size(), 0);
        sort(potions.begin(), potions.end());
        for(int i = 0; i < spells.size(); i++){
            int l = 0;
            int h = potions.size()-1;
            while(l <= h){
                int mid = l + (h-l)/2;
                if((long long)spells[i]*(long long)potions[mid] >= success){
                    h = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            ans[i] = potions.size()-h-1;
        }
        return ans;
    }
};