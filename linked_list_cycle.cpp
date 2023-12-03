/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // this code use two pointers one increments by two and the other increments by one. if both reach at same address 
 // during execution, it means there is a loop

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast_ptr = head;
        ListNode *slow_ptr = head;
        while(fast_ptr != NULL && fast_ptr ->next != NULL){
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
            if(fast_ptr == slow_ptr)
                return true;
        }
        return false;
    }
};
