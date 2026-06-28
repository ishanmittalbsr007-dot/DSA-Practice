#include<iostream>
using namespace std;
int diagonalSum(int arr[][4],int m,int n){
    int sum=0;
    for(int i=0;i<m;i++){
        if(i!=n-1-1){
            sum+=arr[i][n-i-1];
        }
        sum+=arr[i][i];
    }
    return sum;
}
int main(){
    int arr[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                {13,14,15,16}};
    int x=diagonalSum(arr,4,4);
    cout<<"the sum of diagonal elements:"<<endl;
    cout<<x<<endl;
}