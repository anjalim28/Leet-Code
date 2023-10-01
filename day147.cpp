class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p1 = head, *p2 = head;
        for (int i = 0; i < k-1; i++) {
            p2 = p2->next;
        }
        
        ListNode *end_ptr = p2;
        while (p2->next) {
            p1 = p1->next;
            p2 = p2->next;
        }
        
        swap(end_ptr->val, p1->val);
        
        return head;
    }
};