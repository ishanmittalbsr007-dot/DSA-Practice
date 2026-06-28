#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i,arr[10],n;
    int rightmax[10],leftmax[10];
    int currwater[10],sum=0;
    
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    rightmax[0]=arr[0];
    leftmax[n-1]=arr[n-1];
    for(i=1;i<n;i++){
        rightmax[i]=max(arr[i],rightmax[i-1]);
    }
    for(i=n-2;i>=0;i--){
        leftmax[i]=max(arr[i],leftmax[i+1]);
    }
    // for(i=0;i<n;i++){
    //     hieght[i]=min(rightmax[i],leftmax[i]);
    // }
    for(i=0;i<n;i++){
    currwater[i]=min(leftmax[i],rightmax[i])-arr[i];

    if(currwater[i]>0){
        sum+=currwater[i];
    }
}
cout<<"Total water is:"<<sum;
}