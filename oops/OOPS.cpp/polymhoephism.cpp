#include<iostream>
using namespace std; 
class print {
    public:
    void show(int x){
        cout<<"Int "<< x<< endl;
    }
    void show(string str){
        cout<< "STRING "<< str <<endl;
    }
     
};
int main(){
    print obj1;
    obj1.show(25);
    obj1.show("ishan mittal");

    return 0;
}