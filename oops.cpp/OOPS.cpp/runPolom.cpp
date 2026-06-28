#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"Parent class"<<endl;
    }
};
class child : public Parent{
    public:
    void show(){
        cout<<"Child class\n";
    }

};
int main(){
    child c1;
    c1.show();
}