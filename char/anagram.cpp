#include<iostream>
#include<string>

using namespace std;
void anagram(string ch,string str){
    int  i;
    int count[26]={0};
    if(ch.length()==str.length()){
    for(i=0;i<ch.length();i++){
        count[ch[i]-'a']++;

    }
    for(i=0;i<str.length();i++){
        
        count[str[i]-'a']--;
        
    }
   for(i=0;i<26;i++){
    if(count[i]!=0){
        cout << "Invalid "<< endl;
        
        return;
    }
   }
 cout<<"valid"<<endl; 
 return;
 
}
else{
    cout<< "Invalid" << endl;
    return;
}
}
int main(){
    string ch,str;
    getline(cin,ch);
    getline(cin,str);
    anagram(ch,str);
}