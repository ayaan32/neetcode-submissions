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
    void reorderList(ListNode* head) {
        ListNode* curr = head;
        int len = 0;
        vector<ListNode*> temp;
        while(curr) {
            temp.push_back(curr);
            curr = curr->next;
            len++;
        }
        ListNode* newHead = head;
        int i=0, j=len-1;
        while(i<j) {
            temp[i]->next = temp[j];
            i++;
            if(i >= j) break;
            temp[j]->next = temp[i];
            j--;
        }
        temp[i]->next = nullptr;
    }
};
