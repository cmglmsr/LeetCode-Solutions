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
    bool isPalindrome(ListNode* head) {
        vector<int> vals;
        vector<int> revvals;
        for(ListNode* cur = head; cur != NULL; cur=cur->next) {
            vals.push_back(cur->val);
            revvals.push_back(cur->val);
        }
        reverse(revvals.begin(), revvals.end());
        return vals == revvals;
    }
};