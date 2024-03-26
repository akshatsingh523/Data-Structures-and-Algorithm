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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int> arr;
        ListNode* h1=head;
        while(h1!=NULL){
            arr.push_back(h1->val);
            h1=h1->next;
        }
        k = k % arr.size();
        while(k>0){
            int temp=arr[arr.size()-1];
            for(int i=arr.size()-1;i>0;i--){
                arr[i]=arr[i-1];
            }
            arr[0]=temp;
            k--;
        }
        for(auto x:arr){
            cout<<x;
        }
        ListNode* h2=new ListNode(0);
        ListNode* h3=h2;
        for(auto x:arr){
            h2->next=new ListNode(x);
            h2=h2->next;
        }
        return h3->next;
    }
};