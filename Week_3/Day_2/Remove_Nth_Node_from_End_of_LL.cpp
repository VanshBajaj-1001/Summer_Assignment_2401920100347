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
        ListNode* slow=head;// we use slow fast pointer approach
        ListNode* fast=head;
        for(int i=0;i<n;i++){ //we move fast pointer to one node before the node that is to be removed i.e nth node from last
            fast=fast->next;
        }
        if(fast==NULL)   {//if fast is null delete the head
            ListNode* temp=head;  //if one or no head
            head=head->next;
            return head;
        }
        while(fast->next!=NULL){//move both pointer till we reach the last node
            slow=slow->next;//after the loop slow will point to the node just before the node to be deleted
            fast=fast->next;
        }
        ListNode* temp=slow->next; //store the node to be deleted
        slow->next=slow->next->next; //we change the next of slow pointing node
        return head;
    }
};