class Solution {
public:
    ListNode* reverseList(ListNode* head, ListNode* next=NULL) {
        if (head == NULL) return next;
        ListNode* node = new ListNode(head->val, next);
        return reverseList(head->next, node);
    }
};
