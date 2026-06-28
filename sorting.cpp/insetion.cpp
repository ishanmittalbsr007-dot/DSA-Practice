#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int>& vec,int n){
    int i,j,curr,prev;
    for(i=1;i<n;i++){
        curr=vec[i];
       prev=i-1;
       while(prev>=0 && vec[prev]>curr){
        swap(vec[prev],vec[prev+1]);
        prev--;
        }
      
    }
}
int main(){
    int n,i;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    vector <int> v(n);
    cout<<"Enter the elements of array:"<<endl;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    insertion(v,n);
    cout<<"Sorted array is:"<<endl;
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    }