#include<iostream>
#include<vector>
#include<list>
using namespace std;
template<class T>
class node{
    public:
   T data;
   node<T>* next;
    
    node(T val){
        data=val;
        next=NULL;
    }
};
template<class T>
class stack{
    node<T>* head;

    public:
    stack(){
        head=NULL;
    }
    void push(T val){
        node<T>* newNode=new node<T>(val);
        if(head==NULL){
            head=newNode;
        }
        else{
        newNode->next=head;
        head=newNode;
        }
    }
    void pop(){
        node<T>* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    T top(){
        return head->data;
    }
    bool isEmpty(){
        return head==NULL;
    }
};

int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    while (!s.isEmpty())
    {
        cout<< s.top() <<" ";
        s.pop();
    }
    
    return 0;
}