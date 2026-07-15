#include<iostream>
using namespace std;
int expo(int x,int n){
    int ans=1;
    while(n>0){
        int lastbit=n&1;
        if(lastbit){
            ans=ans*x;
        }
        x=x*x;
        n=n>>1;
    }
}
int main(){
    int x,n;
    cin>>x>>n;
    int ans=expo(x,n);
    cout<<"The answer is"<<ans <<endl;
}