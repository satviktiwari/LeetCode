class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int ans = people.size();
        int l = 0;
        int h = ans-1;
        while(l < h){
            if(people[l] + people[h] <= limit){
                ans--;
                l++;
                h--;
            }
            else{
                h--;
            }
        }
        return ans;
    }
};