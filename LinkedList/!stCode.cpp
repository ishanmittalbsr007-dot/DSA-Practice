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
};
int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(5);
    ll.push_front(2);

    return 0;
}

