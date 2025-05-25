class Solution{
    public:
    void reorderList(ListNode* head) {
        ListNode* mid = head, *fast = head;

        while(fast && fast->next){
            mid = mid->next;
            fast = fast->next->next;
        }

        ListNode* reverse = nullptr;
        while(mid){
            ListNode* temp = mid->next;
            mid->next = reverse;
            reverse = mid;
            mid = temp;
        }

        while(reverse->next){
            ListNode *temp1 = head->next;
            ListNode *temp2 = reverse->next;

            head->next = reverse;
            reverse->next = temp1;

            head = temp1;
            reverse = temp2;
        }
    }
};