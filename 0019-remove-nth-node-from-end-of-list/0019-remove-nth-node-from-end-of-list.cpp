class Solution{
    public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* left = head, *right = head; 
        ListNode* prev = nullptr;
        int ctr = 0;
        while(ctr < n-1 && right->next){
            right = right->next;
            ctr++;
        }

        while(right && right->next){
            prev = left;
            left = left->next;
            right = right->next;
        }

        if(prev == nullptr) return head->next;

        prev->next = left->next;

        // cout << left->val << " adwkad " << right->val << endl; 

        return head;
    }
};
