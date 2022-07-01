class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans = 0;
        int i = 0;
        int idx = 1;
        while(k){
            if(arr[i] == idx){
                idx++;
                i++;
                if(i == arr.size()){
                    idx += k;
                    ans = idx-1;
                    break;
                }
            }
            else{
                k--;
                if(k == 0){
                    ans = idx;
                    break;
                }
                idx++;
            }
        }
        return ans;
    }
};