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
        ListNode* trav = head;
        int len=0;
        while(trav != nullptr) {
            trav = trav->next;
            len++;
        }
        ListNode dummy(0, head);
        ListNode* curr = &dummy;
        for(int i=0; i<len-n; i++) {
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return dummy.next;
    }
};
