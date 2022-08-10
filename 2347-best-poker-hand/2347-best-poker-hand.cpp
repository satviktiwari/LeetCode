class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int>mp1;
        for(int i = 0; i < ranks.size(); i++){
            mp1[ranks[i]]++;
        }
        unordered_map<char, int>mp2;
        for(int i = 0; i < suits.size(); i++){
            mp2[suits[i]]++;
        }
        for(auto it : mp2){
            if(it.second >= 5){
                return "Flush";
            }
        }
        for(auto it : mp1){
            if(it.second >= 3){
                return "Three of a Kind";
            }
        }
        for(auto it : mp1){
            if(it.second >= 2){
                return "Pair";
            }
        }
        for(auto it : mp1){
            if(it.second >= 1){
                return "High Card";
            }
        }
        return "";
    }
};