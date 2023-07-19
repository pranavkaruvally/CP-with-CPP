//Runtime: 32ms -> Beats 83.98% of users with C++
//Memory: 70.70mb -> Beats 99.02% of users with C++

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1=l1, *temp2=l2, *prev;
        int val, remainder=0;

        while (temp1 != NULL && temp2 != NULL) {
            val = (temp1->val + temp2->val + remainder) % 10;
            remainder = (temp1->val + temp2->val + remainder) / 10;

            temp1->val = val;

            prev = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if (temp1 == NULL && temp2 != NULL) {
            prev->next = new ListNode((temp2->val + remainder)%10, temp2->next);
            prev = prev->next;
            temp1 = prev->next;
            remainder = (temp2->val + remainder) / 10;
        }

        while (remainder > 0) {
            if (temp1 == NULL) {
                prev->next = new ListNode();
                temp1 = prev->next;
            }
            int temp_val = temp1->val;
            temp1->val = (temp1->val + remainder) % 10;
            remainder = (temp_val + remainder) / 10;
            prev = temp1;
            temp1 = temp1->next;
        }

        return l1;
    }
};
