#include<iostream>
#include<vector>
using namespace std;
void bubble(vector<int>& vec,int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(vec[j]>vec[j+1]){
                temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }
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
    bubble(v,n);
    cout<<"Sorted array is:"<<endl;
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    }