class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1) return 1;
        
        int i = 0, j = 1;
        while (j < nums.size()) {
            if (nums[i] != nums[j])
                swap(nums[++i], nums[j]);
            j++;
        }

        return i+1;
    }
};
