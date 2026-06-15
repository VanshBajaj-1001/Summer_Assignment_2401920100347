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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;// temp points to the head head stores the starting node of linked list
        ListNode* prev=NULL;  // prev pointer is used to track and traverse previous node for current node
        while(temp!=NULL){
            ListNode* front=temp->next;// front is temporary node used to store next node for current node
            temp->next=prev;   // we set current node's next to be its prev node
            prev=temp;// now the new previous node is temp the current node
            temp=front;  //the new current node is next node
        }
        return prev;
    }
};