class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;
        
        while (curr->next != nullptr && curr->next->next != nullptr) {
            ListNode* first = curr->next;
            ListNode* second = curr->next->next;
            curr->next = second;
            first->next = second->next;
            second->next = first;
            curr = curr->next->next;
        }
        
        return dummy->next;
    }
};