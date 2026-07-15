
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=prev=NULL;
    }
};
class doblylist{
    public:
    node* head;
    node* tail;
          doblylist(){
            head=tail=NULL;

          }
          void push_front(int val){
            node*newNode= new node(val);
            if(head==NULL){
                head=tail=newNode;
            }
            else{
                newNode->next=head;
                head->prev=newNode;
                head=newNode;
            }
          }
                   void pop_front(){
           node* temp=head;
           head=head->next; 
            if(head!=NULL){
               head->prev=NULL;
            }
           temp->next = NULL;
           delete temp;
          }
          void printList(){
            node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<"<=>";
                temp=temp->next;
            }
                cout<<"NULL\n";
          }
};


int main(){
    doblylist dl;
    dl.push_front(2);
    dl.push_front(3);
    dl.push_front(4);
    dl.push_front(5);
    dl.push_front(6);
    dl.printList();
    dl.pop_front();
    dl.pop_front();
    dl.printList();

}