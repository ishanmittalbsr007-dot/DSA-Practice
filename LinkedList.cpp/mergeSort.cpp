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
           tail->next=newnode;
           tail=newnode;
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
        fast=fast->next->next;

         if(slow==fast){
            cout<<"Cycle exsist";
            return true;
        }
    }
    cout<<"cycle not exist\n";
    return false;
}
void removeCycle(node* head){
    node* slow = head;
    node* fast = head;
    bool  iscy=false;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"Cycle exists\n";
            iscy=true;
            break;
        }
    } 
    if(!iscy){
        cout<< "cycle doesnot exsist\n";
        return;
    }
    slow=head;
    if(slow==fast){//(speciial case - tail->haed)
        while(fast->next!=slow){
            fast=fast->next;
        }
        fast->next=NULL;

    }
    else{
        node* prev=fast;
        while(slow!=fast){
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=NULL;
    }
}
node* splitatmid(node* head){
    node*slow=head;
    node* fast=head;
     node* prev=NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(prev!=NULL){
    prev->next=NULL;
}
 return slow;
}
node* merge(node* head,node* right){
    list ans;
    node* i=head;
    node* j=right;
    while(i!=NULL && j!=NULL){
        if(i->data<=j->data){
            ans.Push_back(i->data);
            i=i->next;
        }
        else{
            ans.Push_back(j->data);
            j=j->next;
        }
    }
    while(i!=NULL){
        ans.Push_back(i->data);
        i=i->next;
    }
    while(j!=NULL){
        ans.Push_back(j->data);
        j=j->next;
    }
    return ans.head;
}
node* mergeSort(node* head){
    if(head==NULL || head->next==NULL){
        return head; 
    }
    node* rightHead = splitatmid(head);
    
   node* left= mergeSort(head);
    node*right=mergeSort(rightHead);
   return  merge(left,right);
}
int main(){
    list ll;
    ll.Push_back(5);
    ll.Push_back(4);
    ll.Push_back(3);
    ll.Push_back(2);
    // ll.tail->next=ll.head;
    // removeCycle(ll.head);
    printList(ll.head);
    ll.head=mergeSort(ll.head);
    printList(ll.head);
} 