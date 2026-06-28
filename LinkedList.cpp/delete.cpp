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
    ~node(){
        if(next!=NULL){
            cout<<"node destructor"<<data<<endl;
            delete next;
            next=NULL;
        }
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
    ~list(){
        cout<<"destruxtor\n";
       if(head!=NULL){
        delete head;
        head= NULL;
       } 
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
    ll.push_backt(3);
    ll.push_backt(5);
    ll.push_backt(2);
    ll.print();
    ll.push_backt(6);
    ll.push_backt(10);
    ll.print();
    return 0;
}

