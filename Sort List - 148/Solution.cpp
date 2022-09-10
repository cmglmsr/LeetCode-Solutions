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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next ==NULL)
            return head;
        vector<int> ls;
        for(ListNode* cur = head; cur != NULL; cur=cur->next) {
            ls.push_back(cur->val);
        }
        sort(ls.begin(), ls.end());
    
        ListNode* newHead = NULL; ListNode* cur = NULL;
        for(int i = 0; i < ls.size(); i++) {
            ListNode* temp = new ListNode(ls[i]);
            if(i==0) {
                newHead = temp;
                cur = temp;
                continue;
            }
            cur->next = temp;
            cur = temp;
        }
        cur->next = NULL;
        return newHead;
    }
};