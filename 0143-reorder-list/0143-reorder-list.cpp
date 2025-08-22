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
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=nullptr){
            if(fast->next==nullptr || fast->next->next==nullptr){
                break;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* h2=slow->next;
        slow->next=nullptr;
        ListNode* t1=head;

        ListNode *revHead=NULL;
        ListNode *t=h2;
        while(t!=NULL){
           ListNode *temp=t;
            t=t->next;
            temp->next=revHead;
            revHead=temp;
        }

        ListNode* t2=revHead;

        while(t2!=nullptr){
            ListNode*temp=t2;
            t2=t2->next;
            ListNode*temp2=t1;
            t1=t1->next;
            temp2->next=temp;
            temp->next=t1;
        }
    
    }
};
