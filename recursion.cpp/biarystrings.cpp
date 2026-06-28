#include<iostream>
using namespace std;

void binstrings(int n,string ans){
    if(n==0){
        cout<< ans<<endl;
        return;
    }
    if(ans[ans.size()-1]!='1'){
        binstrings(n-1,ans+'0');
        binstrings(n-1,ans+'1');
    }
    else{
        binstrings(n-1,ans +'0');
    }
}
int main(){
    int n;
    cin>>n;
    string ans="";
    binstrings(n,ans);
}