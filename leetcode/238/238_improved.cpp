//Beats 99.64%(11ms) in time and beats 76.45%(24mb) in memory
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(), 1);
        int preProd = 1, postProd = 1;

        for (int i=0; i < nums.size(); i++) {
            answer[i] *= preProd;
            answer[nums.size() - i - 1] *= postProd;
            preProd *= nums[i];
            postProd *= nums[nums.size() - i - 1];
        }

        return answer;
    }
};
