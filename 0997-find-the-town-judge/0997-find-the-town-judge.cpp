class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int , int > m;
        if(n==1) return 1;
        map<int , int >x;
        for(int i=0 ; i<trust.size() ; i++)
        {
            m[trust[i][0]]++;
        }
        for(int i=0 ; i<trust.size() ; i++)
        {
            x[trust[i][1]]++;
        }
        for(int i= 0 ; i<=n ; i++)
        {
            if(m[i]==0&&x[i]==n-1)
                 return i;
        }
        return -1;
    }
};
