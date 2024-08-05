class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* current = head;
        if (current == NULL  || current->next == NULL) {
            return current;
        }
        while (current && current->next) {
            swap(current->val , current->next->val);
            current = current->next->next;
        }
        return head;
    }
};
