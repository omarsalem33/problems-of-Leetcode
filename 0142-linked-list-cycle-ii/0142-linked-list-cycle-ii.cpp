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
    ListNode *detectCycle(ListNode *head) {
         ListNode *p1 = head, *p2 = head;
        while(p2 != NULL and p2->next != NULL)
        {
            p1 = p1->next;
            p2 = p2->next->next;
            
            if(p1 == p2)
                break;
        }
        
        if(p2 == NULL or p2-> next == NULL)
            return NULL;
        
        while(head != p1)
        {
            head = head->next;
            p1 = p1 -> next;
        }
        return head;
    }
};