// LeetCode 61: Rotate List
// Approach: Form a circular linked list and break at the new tail
// Time Complexity: O(n), Space Complexity: O(1)

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int len = 1;
        ListNode* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
            len++;
        }

        k = k % len;
        if (k == 0) return head;

        // Connect tail to head to make it circular
        tail->next = head;

        int stepsToNewTail = len - k;
        ListNode* newTail = tail;
        while (stepsToNewTail--) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
