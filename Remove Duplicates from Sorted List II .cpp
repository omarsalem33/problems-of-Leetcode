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
        if(head==nullptr) return head;

		ListNode* prev=head;
		ListNode* temp=head;


		bool t=false;

		while(prev->next and prev->val==prev->next->val){
			prev->next=prev->next->next;
			t=true;
		}
		head=prev;
		while(prev and prev->next){
			if(prev->val==prev->next->val){
				while(prev->next and prev->val==prev->next->val)
					prev->next=prev->next->next;
				temp->next=prev->next;
				prev=temp;
			}else{
				temp=prev;
				prev=prev->next;
			}
		}

		if(head and t){
			head=head->next;
		}

		return head;
	}

    
};
