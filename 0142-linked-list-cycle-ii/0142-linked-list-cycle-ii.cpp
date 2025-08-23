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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        int flag=0;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return nullptr;
        }
        slow=head;
        
        while(slow!=fast){
            if(slow==fast){
                return slow;
            }
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};