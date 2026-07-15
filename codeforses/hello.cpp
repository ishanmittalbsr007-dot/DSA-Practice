#include<iostream>
using namespace std;

int main(){
    int n;
    int x,y;
    cin>>n;
    while(n!=0){
        int a=0;
        cin>>x>>y;
        for(int i=1;i<=x/2;i++){
            if(x%i==y){
                a=1;
                break;
            }
        }
        if(a==1){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        n--;
    }
}