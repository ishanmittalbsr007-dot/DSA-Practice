#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void countsort(vector<int>& vec,int n){
    int freq[1000]={0};
    int arr[n];
    int i;
    int j=0;
    int mi=INT_MAX;
    int ma=INT_MIN;
    for(i=0;i<n;i++){
        mi=min(vec[i],mi);
        ma=max(vec[i],ma);
    }
    for(i=0;i<n;i++){
        freq[vec[i]]++;
    }
    for(i=mi,j=0;i<=ma;i++){
        while(freq[i]>0){
           arr[j++]=i;
            freq[i]--;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    cout<<"sorted array is:"<<endl;
    countsort(v,n);
}