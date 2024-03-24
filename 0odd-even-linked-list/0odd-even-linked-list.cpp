class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* h1 = head;    
        int i = 1;              

       
        ListNode* h2 = new ListNode(0); 
        ListNode* h3 = h2;     

        while (h1 != NULL) {
            if (i % 2 != 0) {
                h2->next = new ListNode(h1->val);
                h2 = h2->next;
            }
            h1 = h1->next;
            i++;
        }

        h1 = head;
        i = 1;

        while (h1 != NULL) {
            if (i % 2 == 0) {
                h2->next = new ListNode(h1->val);
                h2 = h2->next;
            }
            h1 = h1->next;
            i++;
        }

        return h3->next; 
    }
};
