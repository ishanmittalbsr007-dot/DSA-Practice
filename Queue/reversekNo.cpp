#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void reverse(queue<int> q,int k){
    int n= q.size();
    
    stack<int> s;
    for(int i=0;i<k;i++){
      s.push(q.front());
      q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int x=n-k;
     while(x>0){
        q.push(q.front());
        q.pop();
        x--;
    }
while(!q.empty()){
    cout<< q.front() <<" ";
    q.pop();
}
}
int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reverse(q,3);
    return 0;

}