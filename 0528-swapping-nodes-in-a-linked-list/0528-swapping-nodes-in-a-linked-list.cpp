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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        if(head==nullptr||head->next==nullptr)
        return head;
    
        ListNode*curr=head;
    while(curr!=nullptr)
        {
            curr=curr->next;
            n++;
        }
        curr=head;

        ListNode *first=curr;
        ListNode *last =curr;
        for(int i=0;i<k-1;i++)
        {
            first=first->next;
        }
        for(int j=0;j<n-k;j++)
        {
            last=last->next;
        }
swap(first->val,last->val);
return head;
        
    }
};