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
    node* head;
    node* tail;
    list(){
        head=NULL;
        tail=NULL;
    }
    void Push_back(int Val){
        node* newnode= new node(Val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
};
void printList(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL\n";

}
bool isCycle(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;

         if(slow==fast){
            cout<<"Cycle exsist";
            return true;
        }
    }
    cout<<"cycle not exist\n";
    return false;
}
int main(){
    list ll;
    ll.Push_back(2);
    ll.Push_back(5);
    ll.Push_back(3);
    ll.Push_back(4);
    ll.tail->next=ll.head;
    isCycle(ll.head);
}