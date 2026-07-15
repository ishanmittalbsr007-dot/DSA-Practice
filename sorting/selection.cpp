#include<iostream>
#include<vector>
using namespace std;
void selection(vector<int>& vec,int n){
    int i,j,temp,minindex;
    for(i=0;i<n-1;i++){
        minindex=i;
        for(j=i+1;j<n;j++){
            if(vec[j]<vec[minindex]){
               
               minindex=j;
            }
        }
        swap(vec[i],vec[minindex]);
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
    selection(v,n);
    cout<<"Sorted array is:"<<endl;
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    }