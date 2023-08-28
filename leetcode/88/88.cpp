class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        vector<int> nums;

        while (j < n) {
            while (i < m && nums1[i] < nums2[j]) nums.push_back(nums1[i++]);
            nums.push_back(nums2[j++]);
        }

        while (i < m) {
            nums.push_back(nums1[i++]);
        }

        nums1 = nums;
    }
};
