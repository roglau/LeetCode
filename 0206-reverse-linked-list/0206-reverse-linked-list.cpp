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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* res = nullptr;
        while(curr){
            // cout << "a"<< endl;
            if(res == nullptr){
                // cout << "msk1";
                res = new ListNode(curr->val);
            }else{
                // cout << "msk2" << endl;
                res = new ListNode(curr->val, res);
            }
            curr = curr->next;
        }

        // while(res){
        //     cout << res->val << endl;
        //     res = res->next;
        // }

        return res;
    }

};