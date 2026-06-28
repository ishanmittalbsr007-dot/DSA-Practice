#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    public:
    node* head;
    node* tail;
    
    list(){
        head=NULL;
        tail=NULL;
    }

 void push_front(int val){
    node* newnode= new node(val);

    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }

 }
 void reverse(){
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
 }
bool isPalindrome(node* head) {
 if(head==NULL || head->next==NULL){
    return true;
 }
 node* slow=head;
 node* fast=head;
 while(fast->next!=NULL && fast->next->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
 }
 node* prev=NULL;
 node* curr=slow->next;
 node* next;
 while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
 }
 node* left=head;
 node* right=prev;
while(right!=NULL){
    if(left->data!=right->data){
        return false;
    }
    left=left->next;
    right=right->next;
}
return true;
}

 

 void print(){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL\n";
    
 }
};
int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    if(ll.isPalindrome(ll.head)){
        cout<<"yes\n";
    }
    else{
        cout<<"np\n";
    }
    ll.print();
}