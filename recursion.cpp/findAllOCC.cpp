#include<iostream>
#include<vector>
using namespace std;

void Occuerence(vector<int>& arr,int i,int target){
        if(i==arr.size()){
            return;
        }
        if(arr[i]==target){
            cout<<i<<" ";
        }
        Occuerence(arr,i+1,target);
}
int main(){
    vector<int> arr(6);
    for(int i=0;i<6;i++){
        cin >> arr[i];
    }
    Occuerence(arr,0,2);
}