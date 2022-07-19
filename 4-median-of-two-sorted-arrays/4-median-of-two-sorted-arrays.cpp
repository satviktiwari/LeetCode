class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>nums3(n+m);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());
        int sz = nums3.size();
        if(sz % 2 != 0){
            return nums3[sz/2]/1.0;
        }
        else{
            return (nums3[sz/2] + nums3[(sz-1)/2])/2.0;
        }
    }
};