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
            newnode->next=head;
            head=newnode;
        }
    }
   void swap(node* &head, int n, int m) {
    if (n == m) return;

    if (n > m)
        std::swap(n, m);

    node *prev1 = NULL, *curr1 = head;
    node *prev2 = NULL, *curr2 = head;

    // Find nth node
    for (int i = 1; i < n && curr1 != NULL; i++) {
        prev1 = curr1;
        curr1 = curr1->next;
    }

    // Find mth node
    for (int i = 1; i < m && curr2 != NULL; i++) {
        prev2 = curr2;
        curr2 = curr2->next;
    }

    // Invalid positions
    if (curr1 == NULL || curr2 == NULL)
        return;

    // Connect previous nodes
    if (prev1 != NULL)
        prev1->next = curr2;
    else
        head = curr2;

    if (prev2 != NULL)
        prev2->next = curr1;
    else
        head = curr1;

    // Swap next pointers
    node* temp = curr1->next;
    curr1->next = curr2->next;
    curr2->next = temp;
}    void print(){
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
    ll.print();
    ll.swap(ll.head,2,4);
    ll.print();
    return 0;
}

