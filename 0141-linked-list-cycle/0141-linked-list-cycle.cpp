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
    unordered_map<ListNode*, int>  hash;

    bool hasCycle(ListNode *head) {
        while(head){
            if(hash[head] != NULL) return true;

            hash[head] = head->val;
            head = head->next;
        }
        return false;
    }
};