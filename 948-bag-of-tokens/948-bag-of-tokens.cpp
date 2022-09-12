class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int n = tokens.size();
        int l = 0;
        int r = n-1;
        int score = 0;
        while(l < r){
            if(tokens[l] <= power){
                score++;
                power -= tokens[l];
                l++;
            }
            else{
                power += tokens[r];
                score--;
                r--;
                if(score < 0){
                    return 0;
                }
            }
        }
        int newScore = score;
        if(l == r){
            if(power >= tokens[l]){
                newScore++;
                power -= tokens[l];
            }
        }
        score = max(score, newScore);
        return score;
    }
};