class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans = 0;
        for(int i = 0; i < k; i++){
            ans += cardPoints[i];
        }
        int res = ans;
        for(int i = k-1, j = cardPoints.size()-1; i >= 0; i--, j--){
            ans += cardPoints[j]-cardPoints[i];
            res = max(res, ans);
        }
        return res;
    }
};