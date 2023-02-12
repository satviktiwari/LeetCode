class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        int i = 0, j = n-1;
        while(i <= j){
            long long t = 0;
            string s = "";
            if(i == j){
                t = nums[i];
                i++;
                j--;
            }
            else{
                s += to_string(nums[i]);
                s += to_string(nums[j]);
                t = stoi(s);
                i++;
                j--;
            }
            ans += t;
        }
        return ans;
    }
};