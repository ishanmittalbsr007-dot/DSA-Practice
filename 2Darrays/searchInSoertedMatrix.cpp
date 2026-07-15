#include<iostream>
using namespace std;
bool search(int arr[][4],int m,int n,int target){
    int i=m-1;
    int j=0;
    while(i>=0 && j<n){
        if(arr[i][j]==target){
            return true;
        }
        else if(arr[i][j]<target){
            j++;
        }
        else{
            i--;
        }
    }
    return false;
}
int main(){
    int arr[4][4]={{2,4,6,8},
                   {3,5,7,9},
                   {10,12,14,16},
                  {11,13,15,17}};
    int target;
    cout<<"Enter the element to found in matrix: "<<endl;
    cin >> target ;
    int x=search(arr,4,4,target);
    cout<<"the ans is : "<<x<<endl;
}