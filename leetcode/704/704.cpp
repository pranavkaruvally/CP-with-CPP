class Solution {
public:
    int search(vector<int>& nums, int target) {
    int start = 0, stop = nums.size() - 1;

    if (nums[start] == target)
        return 0;
    if (nums[stop] == target)
        return stop;

    while (start <= stop) {
        int median = (start + stop) / 2;
        if (nums[median] == target)
            return median;
        if (nums[median] < target)
            start = median + 1;
        else
            stop = median - 1;
    }

    return -1;
    }
};
