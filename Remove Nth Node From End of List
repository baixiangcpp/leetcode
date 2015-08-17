class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
            return 0;
        
        ListNode* pre  = head;
        ListNode* fast = head;
        ListNode* slow = head;
        
        for(int i=0;i<n-1;++i)
            fast = fast->next;
        while(fast->next)
        {
            pre = slow;
            fast = fast->next;
            slow = slow->next;
        }
        if(pre == slow)
            return head->next;
        if(pre->next)
            pre->next = pre->next->next;
        return head;
    }
};
