#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partion(int arr[],int si,int ei){
        int i=si-1;
        int piviot=arr[ei];
        for(int j=si;j<ei;j++){
            if(arr[j]<=piviot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        i++;
        swap(arr[i],arr[ei]);
        return i;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int piviotIdx=partion(arr,si,ei);
    print(arr,ei);
    quicksort(arr,si,piviotIdx-1);
    quicksort(arr,piviotIdx+1,ei);
}

int main(){
    int  arr[6]={4,5,8,2,7,9};
    int n=6;
    quicksort(arr,0,n-1);
    print(arr,n);
}