#include<iostream>
#include<queue>

using namespace std;

void interleave(queue<int> q){
           queue<int> q1;
           int n=q.size();
           for(int i=0;i<n/2;i++){
            int x=q.front();
            q.pop();
            q1.push(x);
           }
        while(!q1.empty()){
             int y = q1.front();
             q1.pop();
             q.push(y);
             int x = q.front();
                q.pop();
                q.push(x);
        }
        while(!q.empty()){
            cout<< q.front() << " ";
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
   q.push(6);
   q.push(7);
   q.push(8);
   q.push(9);

   interleave(q);
    return 0;
}