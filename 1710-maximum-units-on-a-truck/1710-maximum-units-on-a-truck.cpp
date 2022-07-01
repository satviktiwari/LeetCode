class Solution {
public:
    
    static bool comp(vector<int>v1, vector<int>v2){
        return v1[1] >= v2[1];
    }
    
    int maximumUnits(vector<vector<int>>& box, int tsize) {
        int ans = 0;
        sort(box.begin(), box.end(), comp);
        int i = 0;
        while(i < box.size()){
            int units = box[i][0];
            int price = box[i][1];
            if(tsize > units){
                tsize -= units;
                ans += units*price;
            }
            else{
                ans += tsize*price;
                break;
            }
            i++;
        }
        return ans;
    }
};