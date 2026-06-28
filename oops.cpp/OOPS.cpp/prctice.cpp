#include<iostream>
#include<string>
using namespace std;
class user{
    int id;
    string password;

public:
string username;
user(int id){
    this->id=id;
}
int getid(){
    return id;
}
string getpass(){
    return password;
}
void setpassword(string password){
    this->password=password;
}
};
int main(){
    user U1(20256);
    U1.username="Ishan Mital";
    U1.setpassword("Hello");
    cout<<"For id:"<<U1.getid()<<endl;
    cout<<"username : "<<U1.username<<endl;
    cout<<"password : "<<U1.getpass()<<endl;
}