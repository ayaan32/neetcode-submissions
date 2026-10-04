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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nodes;
        for(auto i : lists) {
            while(i) {
                nodes.push_back(i->val);
                i = i->next;
            }
        }
        sort(nodes.begin(), nodes.end());
        ListNode* res = new ListNode(0);
        ListNode* cur = res;
        for(auto i : nodes) {
            cur->next = new ListNode(i);
            cur = cur->next;
        }
        return res->next;
    }
};
