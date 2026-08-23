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
ListNode* merge(ListNode* left, ListNode* right)
{
    ListNode* dummy = new ListNode(-1);
    ListNode* curr = dummy;

    while(left != nullptr && right != nullptr)
    {
        if(left->val < right->val)
        {
            curr->next = left;
            left = left->next;
        }
        else
        {
            curr->next = right;
            right = right->next;
        }

        curr = curr->next;
    }

    // One of the lists may still have nodes
    if(left != nullptr)
        curr->next = left;
    else
        curr->next = right;

    ListNode* ans = dummy->next;
    delete dummy;

    return ans;
}
    ListNode* sortList(ListNode* head)
{
    // Base case
    if(head == nullptr || head->next == nullptr)
        return head;

    // Find middle
    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Split
    ListNode* right = slow->next;
    slow->next = nullptr;

    // Sort both halves
    ListNode* left = sortList(head);
    right = sortList(right);
    return merge(left,right);


    // Now MERGE left and right
}
};
     