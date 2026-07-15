#include<iostream>
using namespace std;
string removeDuplicates(string str,string ans,int i,bool map[26]){
    if(i==str.size()-1){
        cout<<ans;
    }
    int idx=(int)(str[i]-'a');
    if(map[idx]){
        removeDuplicates(str,ans,i+1,map);
    }
    else if(map[idx]==false){
        map[idx]=true;
        removeDuplicates(str,ans+str[i],i+1,map);
    }
}
int main(){
    bool map[26]={false};
    int i=0;
    string str="aappnnacollege";
    string ans="";
    removeDuplicates(str,ans,i,map);
}