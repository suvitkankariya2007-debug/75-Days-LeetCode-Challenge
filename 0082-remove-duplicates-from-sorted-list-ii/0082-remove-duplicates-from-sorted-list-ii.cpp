class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != nullptr) {

            // Check whether curr is part of a duplicate group
            if (curr->next != nullptr &&
                curr->val == curr->next->val) {

                // Skip all nodes having the same value
                int duplicateValue = curr->val;

                while (curr != nullptr &&
                       curr->val == duplicateValue) {
                    curr = curr->next;
                }

                // Remove the entire duplicate group
                prev->next = curr;//due to this  we use one mpore while loop
            }
            else {
                // curr is unique, so keep it
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};