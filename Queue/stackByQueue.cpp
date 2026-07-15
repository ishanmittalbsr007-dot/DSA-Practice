#include<iostream>
#include<queue>
#include<stack>

using namespace std;

class MyStack {
public:
queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);

        int n=q.size()-1;
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int x=q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
int main(){
    stack<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<< q.top()<<endl;
        q.pop();
    }
    return 0;
}