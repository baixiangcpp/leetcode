class Solution {
private:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)
            return 0;
        int lengthA = 1;
        int lengthB = 1;//the "1" represent the lastest node

        //if A intersects B , their last node is the same.---book <<剑指offer>>
        //1. determine if they have an intersection
        ListNode* listA = headA;
        ListNode* listB = headB;
        while(listA && listA->next) {
            ++lengthA;
            listA = listA->next;
        }
        while(listB && listB->next) {
            ++lengthB;
            listB = listB->next;
        }

        if(listA != listB)
            return 0;
        //2.the longer list go |lengthA - lengthB| step first;
        //then another start to go,when they meet,the node is what you want
        listA = headA;
        listB = headB;
        int length;
        if(lengthA > lengthB)
        {
            length = lengthA - lengthB;
            while(length--)
                listA = listA->next;
            ListNode* slow = headB;
            while(listA != slow)
            {
                listA = listA->next;
                slow = slow->next;
            }
            return slow;
        }
        else
        {
            length = lengthB - lengthA;
            while(length--)
                listB = listB->next;
            ListNode* slow = headA;
            while(listB != slow)
            {
                listB = listB->next;
                slow = slow->next;
            }
            return slow;
        }
    }
};
