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
    bool isPalindrome(ListNode* head) {
        if(head->next==nullptr){
            return true;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast!=nullptr){
            if(fast->next==nullptr || fast->next->next==nullptr){
                break;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow;

        if(fast->next==nullptr && mid->next->next!=nullptr){
            mid=mid->next;
        }
        
        ListNode *revHead=nullptr;
        ListNode *t=mid->next;
        while(t!=nullptr){
           ListNode *temp=t;
            t=t->next;
            temp->next=revHead;
            revHead=temp;
        }
        mid->next=revHead;

        t=mid->next;
        ListNode * start=head;
        while(t!=nullptr){
            if(start->val!=t->val){
                return false;
            }
            start=start->next;
            t=t->next;
        }
        return true;
    }
};