class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 1) return true; 
        
        int goal = nums.size() - 1;
        int pos = nums.size() - 2; 
        while (pos >= 0) {
            if (pos + nums[pos] >= goal) {
                goal = pos;
            }
            pos--;
        }
        if (goal == 0)
            return true;
        return false;
    }
};
