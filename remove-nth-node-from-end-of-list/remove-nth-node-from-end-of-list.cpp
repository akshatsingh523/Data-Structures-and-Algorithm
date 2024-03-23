
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
        ListNode* h1 = head;
        vector<int> v1;
        while (head != nullptr) {
            v1.push_back(head->val);
            head = head->next;
        }
        int pos=v1.size()-n;
        v1.erase(v1.begin()+pos);
        ListNode* head2=new ListNode(0);
        ListNode* head3=head2;
        for(auto x:v1){
            head3->next=new ListNode(x);
            head3=head3->next;
        }
        return head2->next;
    }
};
