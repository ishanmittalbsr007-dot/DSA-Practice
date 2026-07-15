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
    int size(){
        node*temp=head;
        int sz=0;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        return sz;
    }
    void removent(int n){
        node*prev=head;
        for(int i=1;i<(size()-n);i++){
            prev=prev->next;
        }
        node *toDel=prev->next;
        cout<<"GOing to delete: "<<toDel->data<<endl;
        prev->next=prev->next->next;
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
    ll.removent(3);
    ll.print();
    return 0;
}

