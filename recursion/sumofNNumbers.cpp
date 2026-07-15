#include<iostream>
using namespace std;

void add(int i,int sum){
    if(i<1){
        cout<<"Sum is:"<<sum;
        return;
    }
    add(i-1,sum+i);
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    add(n,0);
}