/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int len=0;

        while (curr != nullptr) {
            len++;
            curr = curr->next;
        }
        if (len == 1) return nullptr;
        if (len == n) {
            head = head->next;
            return head;
        }
        curr = head;
        int count = 1;
        while (count < len-n) {
            count++;
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};
