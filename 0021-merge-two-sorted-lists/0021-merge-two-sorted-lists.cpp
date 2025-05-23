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
        if (!list1) return list2;
        if (!list2) return list1;
        if (list2->val < list1->val) swap(list1, list2);

        ListNode* head = list1;
        ListNode* prev = nullptr;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                prev = list1;
                list1 = list1->next;
            } else {
                ListNode* next = list2->next;
                prev->next = list2;
                list2->next = list1;
                prev = list2;
                list2 = next;
            }
        }

        if (list2) {
            prev->next = list2;
        }

        return head;
    }
};

