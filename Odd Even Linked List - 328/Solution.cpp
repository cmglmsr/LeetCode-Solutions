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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next==NULL)
            return head;
        ListNode* prev = head, *prevprev = head->next, *firstOdd = head->next;
        bool even = true;
        for(ListNode* cur = head->next->next; cur != NULL; cur = cur->next) {
            if(even) {
                prev->next = cur;
                prev = cur;
            }
            else {
                prevprev->next = cur;
                prevprev = cur;
            }
            even=!even;
        }
        prev->next = firstOdd; prevprev->next = NULL;
        return head;
    }
};