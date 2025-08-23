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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t=head;
        int c=0;
        while(t!=nullptr){
            t=t->next;
            c++;
        }
        cout<<c;
        if(c==n){
            head=head->next;
            return head;
        }
        c=c-n;
        t=head;
        for(int i=1;i<c;i++){
            t=t->next;
        }
        if(t->next!=nullptr){
            t->next=t->next->next;
        }
        return head;
    }
};