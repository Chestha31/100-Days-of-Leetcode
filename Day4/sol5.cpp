class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()<nums1.size()) return findMedianSortedArrays(nums2,nums1);
        int n = nums1.size();
        int m = nums2.size();
        int begin1 = 0;
        int end1 = n;
        while(begin1<=end1){
            int i1 = (begin1+end1)/2;
            int i2 = (n+m+1)/2 - i1;
            int min1 = (i1 == n) ? INT_MAX : nums1[i1];
            int max1 = (i1 == 0) ? INT_MIN : nums1[i1-1];
            int min2 = (i2 == m) ? INT_MAX : nums2[i2];
            int max2 = (i2 == 0) ? INT_MIN : nums2[i2-1];
            if((max1<=min2)&&(max2<=min1)){
                if((m+n)%2==0){
                    return ((double)(max(max1,max2)+min(min1,min2))/2);
                }
                else{
                    return ((double)max(max1,max2));
                }
            }
            else if(max1>=min2){
                end1 = i1-1;
            }
            else{
                begin1 = i1+1;
            }
        }
        return 0.0;
    }
};
