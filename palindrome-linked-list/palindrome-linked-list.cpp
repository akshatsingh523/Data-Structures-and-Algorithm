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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* h1=head;
        while(h1!=NULL){
            v.push_back(h1->val);
            h1=h1->next;
        }
        vector<int> v2=v;
        reverse(v.begin(),v.end());
        if(v2==v){
            return true;
        }
        else{
            return false;
        }
    }
};