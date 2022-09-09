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
        vector<ListNode*> ptrs;
        for(ListNode* cur = head; cur != NULL; cur=cur->next)
            ptrs.push_back(cur);
        if(ptrs[ptrs.size()-n]==head) 
            return head->next;
        if(n==1)
            ptrs[ptrs.size()-n-1]->next = NULL;
        else
            ptrs[ptrs.size()-n-1]->next = ptrs[ptrs.size()-n+1];
        return head;
    }
};