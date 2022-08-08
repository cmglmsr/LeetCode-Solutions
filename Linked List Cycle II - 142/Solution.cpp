/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode** arr = new ListNode*[999];
        ListNode* cur = head;
        int i = 0;
        while(true) {
            if(cur == NULL)
                return cur;
            for(int j = 0; j <=i; j++) {
                if(cur == arr[j])
                    return arr[i];
            }
            i++;
            arr[i] = cur;
            cur = cur->next;
        }
    }   
};