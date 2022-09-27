class Solution {
public:
    string pushDominoes(string dom) {
        int n=dom.size();
        vector<int> left(n);
        vector<int> right(n);
        int ind=-1;
        
        for(int i=n-1;i>=0;i--){
            if(dom[i]=='L')
                ind=i;
            else if(dom[i]=='R')
                ind=-1;
            left[i]=ind;
        }
        
        ind=-1;
        for(int i=0;i<n;i++){
            if(dom[i]=='R')
                ind=i;
            else if(dom[i]=='L')
                ind=-1;
            right[i]=ind;
        }
        
        string ans="";
        
        for(int i=0;i<n;i++){
            if(dom[i] == '.'){
                int lef = left[i];
                int righ = right[i];

                int leftDiff = lef == -1 ? INT_MAX : abs(lef  - i);
                int rightDiff = righ == -1 ? INT_MAX : abs(righ  - i);

                if(leftDiff == rightDiff){
                    ans += '.';
                } 
                else if(leftDiff < rightDiff){
                    ans += 'L';
                } 
                else if(leftDiff > rightDiff){
                    ans += 'R';
                }
            } 
            else {
                ans += dom[i] ;
            }

        }
        
        return ans;
    }
};