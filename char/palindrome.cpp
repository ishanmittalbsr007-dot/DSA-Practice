#include<iostream>
#include<string>
using namespace std;
bool palindrome(string ch){
    int start=0;
    int end=ch.length()-1;
    while(start<end){
        if(ch[start]!=ch[end]){
            return false;
        }
            start++;
            end--;
        }
    
    return true;
}
int main(){
    string ch;
    getline(cin,ch,'.');
    cout << palindrome(ch) <<endl;
}