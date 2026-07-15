#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int si,int mid,int ei){
    int i=si;
    int j=mid+1;
    vector<int> ans;
    while(i<=mid && j<=ei){
        if(arr[i]>=arr[j]){
            ans.push_back(arr[i++]);
        }
        else{
            ans.push_back(arr[j++]);
        }
    }
    while (i<=mid){
        ans.push_back(arr[i++]);
    }
    while (j<=ei)
    {
        ans.push_back(arr[j++]);

    }
    for(int idx=si,x=0;idx<=ei;idx++){
        arr[idx]=ans[x++];
    }
    

}
void mergesort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=si+(ei-si)/2;
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    merge(arr,si,mid,ei);

}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int  arr[6]={4,5,8,2,7,9};
    int n=6;
    mergesort(arr,0,n-1);
    print(arr,n);
}