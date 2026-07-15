#include<iostream>
using namespace std;
int getThebit(int n,int i){
    int num=1<<i;
    if((n&num)==0){
        return 0;
    }
    else{
        return 1;
    }

}
int main(){
    int n,i;
    cin>>n>>i;
    int x=getThebit(n,i);
    cout<<"the "<<"ith "<<"bit is "<<x<<endl;
}