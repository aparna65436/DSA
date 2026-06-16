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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        A
        // Step 1: Create dummy node
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        
        // Step 2: Initialize fast & slow
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        
        // Step 3: Move fast n steps ahead
        for(int i = 0; i < n; i++) {
            fast = fast->next;
        }
        
        // Step 4: Move both until fast reaches last node
        while(fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        
        // Step 5: Delete nth node
        slow->next = slow->next->next;
        
        // Step 6: Return new head
        return dummy->next;
    }
};
