#include<iostream>
using namespace std;
void spiral(int arr[][4],int m,int n){
    int srow=0;
    int scol=0;
    int erow=m-1;
    int ecol=n-1;
    while(srow<=erow && scol<=ecol){
        // for top
        for(int j=scol;j<=ecol;j++){
            cout << arr[srow][j];
        }
        // for right
        for(int i=srow+1;i<=erow;i++){
            if(scol==ecol){
                break;
            }
            cout<<arr[i][ecol];
        }
        // for bottom
        for(int j=ecol-1;j>=scol;j--){
            if(srow==erow){
                break;
            }
            cout<<arr[erow][j];
        }
        // for left
        for(int i=erow-1;i>=srow+1;i--){
            cout<<arr[i][scol];
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
}
int main(){
    int arr[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                {13,14,15,16}};
    
    cout<<"The elemennts of spiral diagonal:"<<endl;
     spiral(arr,4,4);
   
}
