#include<iostream>
using namespace std;
bool isEven(int n){

    if(n&1==0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n ;
    if(!(isEven(n))){
        cout<<"even number"<<endl;

    }
    else{
        cout<<"Odd number"<<endl;
    }

}