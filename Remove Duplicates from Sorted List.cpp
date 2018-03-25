/Given a sorted linked list, delete all duplicates such that each element appear only once.

//For example,
//Given 1->1->2, return 1->2.
//Given 1->1->2->3->3, return 1->2->3.

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* cur = head;
        while(cur->next != NULL)
        {
            ListNode* nnext = cur->next;
            if(cur->val == nnext->val)
            {
                ListNode* nnnext = nnext->next;
                delete nnext;
                cur->next = nnnext;                
            }
            else
            {
                cur = nnext;
            }
        }
        return head;
    }
};
