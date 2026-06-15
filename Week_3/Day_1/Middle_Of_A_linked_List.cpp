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
    ListNode* middleNode(ListNode* head) {
        ListNode *fast=head;// to find middle of the linked list we use the fast slpow pointer
        ListNode *slow=head;
        while(fast !=NULL && fast->next!=NULL ){  //we move fast pointer until it ios null and its next is null
            slow=slow->next;  //slow pointer moves one node at a time
            fast=fast->next->next;  // fast node moves two node at a time
        }
        return slow;  // through this logic when fast node reaches end of linked list then slow pointer reaches middle node  

    }
};