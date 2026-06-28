#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int BinarySearch(vector<int>& arr,int low,int high,int terget){
   if(low>high){
    return -1;
   }
    int mid=(low+high)/2;
    if(arr[mid]==terget){
        return mid;
    }
    if(arr[mid]>terget){
        return BinarySearch(arr,low,mid-1,terget);
    }
    else{
       return BinarySearch(arr,mid+1,high,terget);
    }
}

int main(){
    vector<int> arr(6);
    int n=6;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target=8;
    sort(arr.begin(),arr.end());
    int m=BinarySearch(arr,0,n,target);
    cout<<m;
    
}