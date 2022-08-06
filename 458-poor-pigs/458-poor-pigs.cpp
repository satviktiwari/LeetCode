class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int t = minutesToTest/minutesToDie;
        int n = ceil(log(buckets)/log(t+1));
        return n;
    }
};