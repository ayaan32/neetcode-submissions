class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m1=0, m2=0;
        int p1=0, p2=0;
        int n1=nums1.size(), n2=nums2.size();
        for(int i=0; i<(n1+n2)/2+1; i++) {
            m2 = m1;
            if(p1 < n1 && p2 < n2) {
                if(nums1[p1] < nums2[p2]) {
                    m1 = nums1[p1];
                    p1++;
                } else {
                    m1 = nums2[p2];
                    p2++;
                }
            } else if(p1<n1) {
                m1 = nums1[p1];
                p1++;
            } else {
                m1 = nums2[p2];
                p2++;
            }
        }
        if((n1+n2)%2 == 1) {
            return (double) m1;
        } else return (m1+m2)/2.0;
    }
};
