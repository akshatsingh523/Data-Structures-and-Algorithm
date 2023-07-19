/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* dummy=(struct ListNode* )malloc(sizeof(struct ListNode));
    struct ListNode* head=dummy;
    while(list1 && list2){
        if(list1->val>list2->val){
            dummy->next=(struct ListNode* )malloc(sizeof(struct ListNode));
            dummy=dummy->next;
            dummy->val=list2->val;
            list2=list2->next;
        }
        else{
            dummy->next=(struct ListNode* )malloc(sizeof(struct ListNode));
            dummy=dummy->next;
            dummy->val=list1->val;
            list1=list1->next;
        }
    }
    while(list1){
        dummy->next=(struct ListNode* )malloc(sizeof(struct ListNode));
        dummy=dummy->next;
        dummy->val=list1->val;
        list1=list1->next;
    }
    while(list2){
        dummy->next=(struct ListNode* )malloc(sizeof(struct ListNode));
        dummy=dummy->next;
        dummy->val=list2->val;
        list2=list2->next;
    }

    dummy->next=NULL;

    return head->next;
}
