#include<iostream>
#include<string>
using namespace std;
// void swap(string ch,){
//     char temp;
//     temp=ch[i];
//     ch[]

// }
int main(){
    string ch;
    char temp;;
    getline(cin,ch,'.');
  int start=0;
  int end=ch.length()-1;
  while(start<end){
    temp=ch[start];
    ch[start]=ch[end];
    ch[end]=temp;
  start++;
  end--;
  }
  cout << ch << endl;
}