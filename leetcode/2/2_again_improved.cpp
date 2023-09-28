//Beats 96.32% (12 ms) is time and 94.18% (71.26 MB) in memory
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* prev = nullptr;
        ListNode* res = l1;
        int carry = 0;
        while (temp1 != nullptr || temp2 != nullptr) {
            if (temp1 == nullptr) {
                res = l2;
                temp2->val += carry;
                carry = temp2->val / 10;
                temp2->val %= 10;
                prev = temp2;
                temp2 = temp2->next;
            } else if (temp2 == nullptr) {
                temp1->val += carry;
                carry = temp1->val / 10;
                temp1->val %= 10;
                prev = temp1;
                temp1 = temp1->next;
            } else {
                temp1->val += (temp2->val + carry);
                carry = temp1->val / 10;
                temp1->val %= 10;
                temp2->val = temp1->val;
                prev = temp1;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        if (carry > 0) {
            ListNode* newNode = new ListNode(carry);
            prev->next = newNode;
        }

        return res;
    }
};
