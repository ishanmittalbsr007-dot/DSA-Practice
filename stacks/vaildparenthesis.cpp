#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
 bool parenthesis(string s){
    stack<char> x;
    int n=s.size();
    for(int i=0;i<n;i++){
       if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
        x.push(s[i]);
        }
        else {
            if(x.empty()){
                return false;
            }
          
            if((s[i]==']' && x.top()=='[') ||
   (s[i]==')' && x.top()=='(') ||
   (s[i]=='}' && x.top()=='{')){
               x.pop();
            }
            else{
                return false;
            }
        }
       
    }
     
           return x.empty();
 }

int main(){
    string s= "{}[](())";
    string s2 = "[[[{]]]";
   cout<< parenthesis(s)<<endl;
   cout<<parenthesis(s2);
    
}