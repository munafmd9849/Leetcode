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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return NULL;
        }
    
        ListNode *t=head->next;
        ListNode *p=head;


        while(t!=NULL){
            if(t->val==val){
                p->next=t->next;
                t=t->next;
                continue;
            }
            else{
                p=t;
                t=t->next;
            }
            
        }
        
        if(head->val==val){
            head=head->next;
        }
        return head;
        
    }
};