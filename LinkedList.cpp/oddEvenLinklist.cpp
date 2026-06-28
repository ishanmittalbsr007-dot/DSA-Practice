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
    void pudhfront(int val){
        node* newnode= new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
 node* oddEen(node* head){
    list nl;
    node* temp=head;
    while(temp!=NULL){
        if(temp->data%2==0){
            nl.pudhfront(temp->data);
        }
        temp=temp->next;

    }
    node*tem=head;
    while(tem!=NULL){
        if(tem->data%2!=0){
            nl.pudhfront(tem->data);
        }
        tem=tem->next;
    }
    return nl.head;

  }
   void print(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main(){
    list ll;
    ll.pudhfront(1);
    ll.pudhfront(2);
    ll.pudhfront(3);
    ll.pudhfront(4);
    ll.pudhfront(6);
    ll.pudhfront(2);
    ll.print();
    ll.head=ll.oddEen(ll.head);
    ll.print();
    return 0;
}

