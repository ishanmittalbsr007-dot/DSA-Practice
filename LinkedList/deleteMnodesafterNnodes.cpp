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
    void push_front(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    node* delet(node*head, int m,int n){
        if(head == NULL)
        return NULL;
        node* temp = head;
        while(temp!=NULL){
        int i=0;
        int j=0;
        while(temp!=NULL && i<m-1){
            temp=temp->next;
            i++;
        }
        while(temp!=NULL && temp->next!=NULL&& j<n){
            node* del=temp->next;
            temp->next=del->next;
            delete(del);
            j++;
        }
        temp=temp->next;
    }
        return head;

    }
    void print(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(5);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(1);
    ll.push_front(1);
    ll.print();
    ll.head=ll.delet(ll.head,3,4);
    ll.print();
}