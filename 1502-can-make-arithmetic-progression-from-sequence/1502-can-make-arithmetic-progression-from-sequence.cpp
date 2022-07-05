class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        if(arr.size() == 2){
            return true;
        }
        int dif = arr[1]-arr[0];
        for(int i = 1; i < arr.size()-1; i++){
            if(dif != arr[i+1]-arr[i]){
                return false;
            }
        }
        return true;
    }
};