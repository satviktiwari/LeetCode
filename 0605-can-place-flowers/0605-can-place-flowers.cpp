class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0){
            return true;
        }
        if(flowerbed.size() == 0){
            return false;
        }
        if(flowerbed.size() == 1){
            if(flowerbed[0] == 0){
                return true;
            }
            return false;
        }
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(), 0);
        int i = 0;
        int count = 0;
        while(i < flowerbed.size()-2){
            if(flowerbed[i] == 0 and flowerbed[i+1] == 0 and flowerbed[i+2] == 0){
                count++;
                flowerbed[i+1] = 1;
            }
            i++;
        }
        if(count >= n){
            return true;
        }
        return false;
    }
};