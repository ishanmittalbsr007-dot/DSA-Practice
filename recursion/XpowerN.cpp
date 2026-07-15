#include<iostream>
using namespace std;
//--> TC: O(log n);
int power(int x,int n){
    if(n==0){
        return 1;
    }
    int hps=power(x,n/2)*power(x,n/2);
//  int hps= hp*hp;
    if(n%2!=0){
        return x*hps;
    }
    else
        return hps;
    
}
// --->TC: O(n);
// int power(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     return x*power(x,n-1);
// }
int main(){
    int n=5;
    int x=2;
    cout<<power(x,n)<<endl;
}