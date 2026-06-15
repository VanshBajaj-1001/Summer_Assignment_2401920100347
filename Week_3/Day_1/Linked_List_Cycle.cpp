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
    bool hasCycle(ListNode *head) {
        if(head==NULL){   //if there is only one node then it can conotn contain cycle
            return false;
        }
        ListNode* slow=head;  //to find if cycle exists we us e2 pointer slow and fast 
        ListNode* fast=head;  // slow pointer moves only one node at a time but fast node moves 2 nodes at a time
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;   
            fast=fast->next->next;
            if(slow==fast){  //if both pointer point at same node at any time then it means that iy consists of cycle
                return true;
            }
        }
        return false;

    }
};