class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = new ListNode();
        ListNode *prev = head;

        while (list1 != NULL || list2 != NULL) {
            if (list1 == NULL || (list2 != NULL && list1->val > list2->val)) {
                ListNode *node = new ListNode(list2->val);
                prev->next = node;
                prev = node;
                list2 = list2->next;
            }
            else if (list2 == NULL || list1->val <= list2->val) {
                ListNode *node = new ListNode(list1->val);
                prev->next = node;
                prev = node;
                list1 = list1->next;
            }
        }

        return head->next;
    }
};
