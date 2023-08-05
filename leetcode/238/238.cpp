class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> preProdList;
        vector<int> postProdList;
        vector<int> answer;
        int preProd = 1, postProd = 1;

        for (int i=0; i < nums.size(); i++) {
            preProdList.push_back(preProd);
            preProd *= nums[i];
            postProdList.push_back(postProd);
            postProd *= nums[nums.size() - i - 1];
        }

        for (int i=0; i < nums.size(); i++)
            answer.push_back(preProdList[i] * postProdList[nums.size() - i - 1]);

        return answer;
    }
};
