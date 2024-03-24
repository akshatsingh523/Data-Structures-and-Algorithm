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
    ListNode* removeElements(ListNode* head, int val1) {
        vector<int> v;
        ListNode* h1=head;
        while(h1!=NULL){
            if(h1->val!=val1){
                v.push_back(h1->val);
                h1=h1->next;
            }
            else{
                h1=h1->next;
            }
        }
        ListNode* h2=new ListNode(0);
        ListNode* h3=h2;
        for(auto x:v){
            h3->next=new ListNode(x);
            h3=h3->next;
        }
        return h2->next;
    }
};