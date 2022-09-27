class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        if(sum % 3 != 0){
            return false;
        }
        int part = 0;
        int i = 0, temp = 0;
        for(i = 0, temp = 0; i < n && part < 2; i++){
            temp += arr[i];
            if(temp == sum/3){
                temp = 0;
                part++;
            }
        }
        if(part == 2 && i != n){
            return true;
        }
        return false;
    }
};