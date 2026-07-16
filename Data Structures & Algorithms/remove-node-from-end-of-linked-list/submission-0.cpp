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
        ListNode* cur = head;
        int len = 0;
        while(cur) {
            len++;
            cur = cur->next;
        }
        if(len-n == 0){
            return head->next;
        }
        ListNode* trav = head;
        for(int i=0;i<len-1;i++) {
            if(i==len-n-1) {
                trav->next = trav->next->next;
                break;
            }
            trav = trav->next;
        }
        return head;
    }
};
