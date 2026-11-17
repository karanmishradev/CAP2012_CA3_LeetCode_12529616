// LeetCode 83: Remove Duplicates from Sorted List
// Approach: Single traversal skipping adjacent nodes with equal values
// Time Complexity: O(n), Space Complexity: O(1)

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                ListNode* duplicate = curr->next;
                curr->next = curr->next->next;
                delete duplicate;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};
