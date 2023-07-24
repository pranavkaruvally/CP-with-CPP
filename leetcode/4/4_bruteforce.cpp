class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(nums1.size() + nums2.size());
        double median;

        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), v.begin());

        int indexSum = (nums1.size() + nums2.size());
        int index = indexSum/2;
        if (indexSum % 2 == 1) {
            median = v[index];
        } else {
            median = (v[index-1] + v[index]) / 2.0;
        }

        return median;
    }
};
