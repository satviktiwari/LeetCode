class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>ans;
        long long x = num%3;
        if(x != 0){
            return ans;
        }
        long long y = num/3;
        ans.push_back(y-1);
        ans.push_back(y);
        ans.push_back(y+1);
        return ans;
    }
};