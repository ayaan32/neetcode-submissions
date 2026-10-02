class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size(), l2=nums2.size();
        int median1=0, median2=0, i=0, j=0;
        for(int k=0; k<(l1+l2)/2 + 1; k++) {
            median2 = median1;
            if(i<l1 && j<l2) {
                if(nums1[i] < nums2[j]) {
                    median1 = nums1[i];
                    i++;
                } else {
                    median1 = nums2[j];
                    j++;
                }
            }
            else if(i < l1) {
                median1 = nums1[i];
                i++;
            } else {
                median1 = nums2[j];
                j++;
            }
        }
        if((l1+l2)%2 != 0) return (double) median1;
        return (median1+median2)/2.0;
    }
};
