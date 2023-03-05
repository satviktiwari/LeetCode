class Solution {
public:
    int splitNum(int num) {
        vector<int>v;
        while(num){
            v.push_back(num%10);
            num /= 10;
        }
        sort(v.begin(), v.end());
        vector<int>v1, v2;
        for(int i = 0; i < v.size(); i++){
            if(i % 2 == 0){
                v1.push_back(v[i]);
            }
            else{
                v2.push_back(v[i]);
            }
        }
        int n1 = 0, n2 = 0;
        int sz1 = v1.size(), sz2 = v2.size();
        for(int i = 0; i < v1.size(); i++){
            n1 += v1[i]*pow(10, sz1-1);
            sz1--;
        }
        for(int i = 0; i < v2.size(); i++){
            n2 += v2[i]*pow(10, sz2-1);
            sz2--;
        }
        return n1 + n2;
    }
};