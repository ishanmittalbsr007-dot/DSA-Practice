#include<iostream>
#include<vector>
using namespace std;

template<class T>

class stack{
    vector<T> vec;
public:
  void push(T val){
    vec.push_back(val);
}
void pop(){
    vec.pop_back();
}
   T top(){
    // if(isEmpty()){
    //     cout << "stack is empty./n";
    //     return -1;
    // }
    int lastids=vec.size()-1;
    return vec[lastids];
   }
   bool isEmpty(){
    return vec.size()==0;
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