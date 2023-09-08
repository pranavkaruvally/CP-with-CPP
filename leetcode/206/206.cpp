class Solution {
public:
    static ListNode* reverseList(ListNode* head) {
        ListNode *next = NULL;

        while (head != NULL) {
            ListNode* const node = new ListNode(head->val, next);
            next = node;
            head = head->next;
        }

        return next;
    }
};
