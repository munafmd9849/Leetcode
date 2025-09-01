/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *t=head;
        while(t!=nullptr){
            Node *nn=new Node(t->val);
            nn->next=t->next;
            t->next=nn;
            t=nn->next;
        }

        t=head;
        Node* ch=head->next;
        while(t!=nullptr && t->next!=nullptr){
            if(t->random==nullptr){
                t->next->random=nullptr;
            }
            else{
                t->next->random=t->random->next;
            }
            t=t->next->next;
        }
        Node*t1=head;
        Node*t2=head;
        while(t1!=nullptr && t2!=nullptr){
            t1->next=t2->next;
            t1=t2->next;
            if(t1!=nullptr)
                 t2->next=t1->next;
            t2=t1->next;

        }
        return ch;

        

    }
};