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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        int count = 0;
        for(ListNode* cur = head; cur != NULL; cur=cur->next)
            count++;
        
        int middle;
        if(count % 2 != 0) 
            middle = (count / 2) + 1;
        else
            middle = count / 2;

        ListNode* cur = head;
        for(int i = 1; i<=middle; i++) {
            cur=cur->next;
        }
        return cur;
    }
};