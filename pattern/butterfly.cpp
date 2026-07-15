#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cin >> n;
    for(i=0;i<n;i++){
        for(k=0;k<=i;k++){
            cout<<"*";
        }
        for(j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        for(k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n-1;i>=0;i--){
        for(k=0;k<=i;k++){
            cout<<"*";
        }
        for(j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        for(k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}