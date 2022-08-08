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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr)
            return list2;
        if(list2 == nullptr)
            return list1;

        ListNode* newHead = nullptr, *cur = nullptr, *i = list1, *j = list2;
        while(i != nullptr & j != nullptr) {
            if(newHead == nullptr) {
                if(i->val <= j->val) {
                    newHead = i;
                    cur = i;
                    i = i->next;
                }
                else {
                    newHead = j;
                    cur = j;
                    j = j->next;                   
                }
                continue;
            }
            if(i->val <= j->val) {
                cur->next = i;
                cur = cur->next;
                i = i->next;
            }
            else {
                cur->next = j;
                cur = cur->next;
                j = j->next;              
            }
        }

        while(i != nullptr) {
            cur->next = i;
            cur = cur->next;
            i = i->next;           
        }
        while(j != nullptr) {
            cur->next = j;
            cur = cur->next;
            j = j->next;      
        }

        return newHead;
    }
};