class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int val, remainder=0;

        ListNode *start = new ListNode();
        ListNode *temp1 = l1, *temp2 = l2;
        ListNode *temp = new ListNode();
        ListNode *prev = start;
        start->next = temp;

        while (temp1 != NULL || temp2 != NULL) {
            if (temp1 == NULL) {
                temp->val = (temp2->val + remainder) % 10;
                remainder = (temp2->val + remainder) / 10;

                temp2 = temp2->next;
            }
            else if (temp2 == NULL){
                temp->val = (temp1->val + remainder) % 10;
                remainder = (temp1->val + remainder) / 10;

                temp1 = temp1->next;
            }
            else {
                temp->val = (temp1->val + temp2->val + remainder) % 10;
                remainder = (temp1->val + temp2->val + remainder) / 10;

                temp1 = temp1->next;
                temp2 = temp2->next;
            }

            temp->next = new ListNode();
            prev = temp;
            temp = temp->next;
        }

        if (remainder > 0) {
            temp->val = remainder;
        } else {
            prev->next = NULL;
            delete temp;
            temp = NULL;
        }

        return start->next;
    }
};
