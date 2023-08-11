//Beats 100% of C++ users(0ms)

class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        if (nums[0] < nums[1] && nums[0] < nums[nums.size()-1])
            return nums[0];

        int rotations;
        int i = 0, j = nums.size() - 1;

        while (i <= j) {
            rotations = (i+j) / 2;
            if ((j-i) < 2) {
                if (nums[i] < nums[j])
                    return nums[i];
                else return nums[j];
            }
            if (nums[rotations] < nums[rotations-1] && nums[rotations] < nums[rotations+1]) {
                return nums[rotations];
            }

            if (nums[0] < nums[rotations]) {
                i = rotations + 1;
            } else {
                j = rotations - 1;
            }
        }

        return nums[rotations];
    }
};
