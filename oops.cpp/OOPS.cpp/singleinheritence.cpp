#include<iostream>
using namespace std;
 
class animal{
    public:
    string color;
    void breath(){
        cout<<"can breath\n";
    }
    void eat(){
        cout<<"can eat"<<endl;
    }

};
class dog :public animal{
    public:
    string name;
    void bark(){
        cout<< "dog can bark"<<endl;
    }
};
int main(){
    dog d1;
    d1.breath();
    d1.eat();
    d1.color="brown";
    d1.name="sheru";
    cout<<d1.color<<endl;
    cout<<d1.name<<endl;
}