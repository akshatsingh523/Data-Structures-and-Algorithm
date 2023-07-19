/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    int arr[1000];
    struct ListNode* l3=(struct ListNode* )malloc(sizeof(struct ListNode));
    struct ListNode* head=l3;

    int i=0;

    while(list1 && list2){
        arr[i++]=list1->val;
        arr[i++]=list2->val;
        list1=list1->next;
        list2=list2->next;
    }
    while(list1){
        arr[i++]=list1->val;
        list1=list1->next;
    }

    while(list2){
        arr[i++]=list2->val;
        list2=list2->next;
    }
    int j, temp;
    for (j = 0; j < i - 1; j++) {
        for (int k = 0; k < i - j - 1; k++) {
            if (arr[k] > arr[k + 1]) {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    for(int k=0;k<i;k++){
        l3->next=(struct ListNode* )malloc(sizeof(struct ListNode));
        l3=l3->next;
        l3->val=arr[k];
    } 

    l3->next=NULL;   

    return head->next;
}
