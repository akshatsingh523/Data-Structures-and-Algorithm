/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) return nullptr;

        ListNode* node = head;
        set<ListNode*> s;

        while (node != nullptr) { // Check if node is not null
            if (s.find(node) != s.end()) {
                // Found the start of the cycle
                return node;
            }
            s.insert(node);
            node = node->next;
        }
        return nullptr; // No cycle found
    }
};
