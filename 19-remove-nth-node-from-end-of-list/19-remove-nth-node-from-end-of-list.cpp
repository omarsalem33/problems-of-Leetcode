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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     if(head->next == NULL) 
            return NULL;
        int count = 0;
        ListNode *p = head, *temp;
        
        while(p)
        {
            count++;
            p = p->next;
        }
        
        if(count == n) 
            return head->next; 
        
        count -= n;
        p = head;
        
        while(count--)
            if(count == 0)
                p->next = p->next->next;
            else 
                p = p->next;
        
        return head;
    }
};