#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            cout<<" ";
        }
        for(k=0;k<(2*i+1);k++){
            cout<<"*";
        }
        cout<<endl;
    }

for(i=n-1;i>=0;i--){
    for(j=i;j<n;j++){
        cout<<" ";
    }
    for(k=0;k<(2*i+1);k++){
        cout<<"*";
    }
    cout<<endl;
}
}