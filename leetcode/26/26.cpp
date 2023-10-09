class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0];
        int result = 1;
        vector<int> resultList = {nums[0]};
        //for i in range(1, len(nums)):
        for (int i=1; i<nums.size(); i++) {
            if (prev != nums[i]) {
                result += 1;
                resultList.push_back(nums[i]);
                prev = nums[i];
            }
        }
            
        nums = resultList;
        return result;
    }
};
