// Beats 99.98% in time (15ms)
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
    void reorderList(ListNode* head) {
        ListNode *slow = head, *fast = head->next, *prev_fast=nullptr;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            prev_fast = fast;
            fast = (fast->next)->next;
        } // Now slow is at the middle
        ListNode *prev = slow, *curr = slow->next, *temp;
        slow->next = nullptr;

        while (curr != nullptr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        ListNode *front = head, *back = prev;

        while (back != slow) {
            ListNode* temp = back->next;
            back->next = front->next;
            front->next = back;
            front = back->next;
            back = temp;
        }
    }
};
