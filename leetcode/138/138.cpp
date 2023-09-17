class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;
        Node* newHead = new Node(0);
        Node* prev = newHead;
        int len=0;
        for (Node* temp=head; temp != NULL; temp=temp->next) {
            Node* newTemp = new Node(temp->val);
            len++;
            prev->next = newTemp;
            prev = newTemp;
        }
        for (Node *temp=head, *newTemp=newHead->next; temp!=NULL; temp=temp->next, newTemp=newTemp->next) {
            Node* thisNode = temp->random;
            int n = 0;
            while (thisNode != NULL) {
                n++;
                thisNode = thisNode->next;
            }
            n = len - n;
            if (n == len) continue;
            Node* thisNewNode = newHead->next;
            for (int i=0; i<n; i++) {
                thisNewNode = thisNewNode->next;
            }
            newTemp->random = thisNewNode;
        }
        return newHead->next;
    }
};
