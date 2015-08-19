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
   bool isPalindrome(ListNode* head) {
		int count = 0;
		ListNode* tmp = head;
		while (tmp) {
			++count;
			tmp = tmp->next;
		}
		count /= 2;
		tmp = head;
		while (count) {
			tmp = tmp->next;
			count--;
		}
		//front list will have one more node
		tmp = reverse(tmp);
		while (tmp&&head)
		{
			if (tmp->val != head->val)
				return false;
			tmp = tmp->next;
			head = head->next;
		}
		return true;
	}
	ListNode* reverse(ListNode* list)
	{
		ListNode* pre, *cur, *back;
		pre = NULL;
		cur = back = list;
		while (back)
		{
			cur = back;
			back = back->next;
			cur->next = pre;
			pre = cur;
		}
		return cur;
	}
};