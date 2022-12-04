class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long ans = 0;
        sort(skill.begin(), skill.end());
        vector<pair<int,int>>v;
        int j = skill.size()-1;
        for(int i = 0; i < skill.size()/2; i++){
            v.push_back({skill[i], skill[j]});
            j--;
        }
        int sum = v[0].first + v[0].second;
        for(int i = 1; i < v.size(); i++){
            int tsum = v[i].first + v[i].second;
            if(sum != tsum){
                return -1;
            }
        }
        for(auto it : v){
            ans += it.first * it.second;
        }
        return ans;
    }
};