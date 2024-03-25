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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1=list1;
        ListNode* h2=list2;
        vector<int> v;
        while(h1!=NULL){
            v.push_back(h1->val);
            h1=h1->next;
        }
        while(h2!=NULL){
            v.push_back(h2->val);
            h2=h2->next;
        }
        sort(v.begin(),v.end());
        ListNode* h3=new ListNode(0);
        ListNode* h4=h3;
        for(auto x:v){
            h3->next=new ListNode(x);
            h3=h3->next;
        }
        return h4->next;
    }
};