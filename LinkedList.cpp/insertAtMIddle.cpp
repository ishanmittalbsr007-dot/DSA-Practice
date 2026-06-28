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
    node*head;
    node*tail;
    public:
    list(){
        head=NULL;
        tail=NULL;
    }

void push_front(int val){
        node*newNode= new node(val);//dynamic
        // node*newNode(val);//static
        if(head==NULL){
            head=tail=newNode;
        } 
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void insertAtMiddle(int val ,int pos){
        node*newnode= new node(val);
        node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"invalid";
                return;
            }
                temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void print(){
        node* temp=head;
        while(temp->next!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(5);
    ll.push_front(2);
    ll.push_front(4);
    ll.push_front(10);
    ll.print();
    ll.insertAtMiddle(100,3);
    ll.print();
    return 0;
}