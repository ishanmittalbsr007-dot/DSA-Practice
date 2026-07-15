#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"Parent class"<<endl;
    }
    virtual void hello(){
        cout<<"parent hello\n";
    }
};
class child : public Parent{
    public:
    void show(){
        cout<<"Child class\n";
    }
    void hello(){
        cout<<"child hello\n";
    }

};
int main(){
    child c1;
    Parent *ptr;
    ptr=&c1;
    ptr->hello();

    c1.show();
}