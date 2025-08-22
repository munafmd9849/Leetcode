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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *p=head;
        ListNode *t=head->next;
        while(t!=NULL){
            if(p->val==t->val){
                t=t->next;
                p->next=t;
            }
            else{
                p=p->next;
                t=t->next;
            }
        }
        return head;
    }
};