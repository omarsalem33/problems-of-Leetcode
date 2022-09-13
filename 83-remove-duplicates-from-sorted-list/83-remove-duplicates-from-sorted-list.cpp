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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* result = head;
        if( head == NULL ){ 
            return result;
        }
        
        
        int prev = head->val;
        ListNode* temp = result;
        
        
        while( head!=NULL ){
            int curr = head->val;
            if( curr!=prev ){
                temp->next = head;
                temp = temp->next;
                prev = curr;
            }
            head = head->next;
        }  
        
        
        temp->next = NULL;
        return result;
    }
};