class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false ;
        ListNode *fast = head, *slow = head;
        while (fast and fast->next)
        {
            fast = fast -> next -> next;
            slow = slow-> next;
        
        if(slow == fast)
            return true ;
        }
        return false ;
    }
};