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
    ListNode* reverseLL(ListNode* head){  //using a recursive function to reverse a linked list
        if(head==NULL ||head->next==NULL){// when there is no no or a single node then it is already in reversed state we return head node
            return head;
        }
        ListNode* newhead=reverseLL(head->next);  
        ListNode* front=head->next;  //next node points back to current node
        front->next=head;
         head->next=NULL;
         return newhead;  //return the new head of linked list
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL ||head->next==NULL){
            return true;
        }
        ListNode* slow=head; //we use slow fast pointer to find the middle node of linked list 
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL){
            slow=slow->next;
        }
        ListNode* newhead=reverseLL(slow);   //reversing the second half of the linked list
        ListNode* first=head;  //compare first and second half
        ListNode* second=newhead;
        while(second!=NULL){
          if(second->val!=first->val){   //if values differ then not a palindrome
            reverseLL(newhead);
            return false;
          }
          first=first->next;
          second=second->next;
        }
        reverseLL(newhead);  //restore linked list to its orignal form
        return true;
    }
};