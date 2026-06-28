#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
  
    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    public:
    node*head;
    node*tail;
    list(){
        head=NULL;
        tail=NULL;
    }
    void push_backt(int val){
        node*newNode= new node(val);//dynamic
        // node*newNode(val);//static
        if(tail==NULL){
            head=tail=newNode;
        } 
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
};
  node* slpitATmid(node* head){
        node* slow=head;
        node* fast=head;
        node* prev=NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;

        }
        if(prev!=NULL){
            prev->next=NULL;
        }
        return slow;
    }
 node* reverse(node* head){
        node*prev=NULL;
        node*curr=head;
        node*next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }
  node* zigZag(node* head){
        node* righthead=slpitATmid(head);
        node* rightheadrev=reverse(righthead);

        node* left=head;
        node* right=rightheadrev;
        node* tail=right;
        while(right!=NULL && left!=NULL){
            node* nextleft = left->next;
            node* nextright= right->next;

            left->next=right;
            right->next=nextleft;
            tail=right;

            left=nextleft;
            right=nextright;
        }
        if(right!=NULL){
            tail->next=right;
        }
        return head;
    }

    void print(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
int main(){
    list ll;
    ll.push_backt(3);
    ll.push_backt(5);
    ll.push_backt(2);
    print(ll.head);
    ll.push_backt(6);
    ll.push_backt(10);
    print(ll.head);
    ll.head=zigZag(ll.head);
    print(ll.head);
    return 0;
}

