#include<iostream>
using namespace std;
int friendsPairing(int n){
     if(n==2 || n==1){
        return n;
    }
    return friendsPairing(n-1)+ (n-1)*friendsPairing(n-2);
}
int main(){
    int n;
    cin>>n;
    int ans = friendsPairing(n);
    cout<<ans;
}