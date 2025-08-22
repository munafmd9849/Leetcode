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
    void deleteNode(ListNode* node) {
        ListNode* t=node->next;
        ListNode*p=node;
        while(t->next!=NULL){
           p->val=t->val;
           p=p->next;
           t=t->next;
        }
        p->val=t->val;
        p->next=NULL;
    }
};