#include<iostream>
using namespace std;
class car{
    string name;
    string color;
    int price;
    public:
    //constructor
    car(){
        cout<<"constructor without paramenter called"<<endl;
    }
    car(string nameval,string col){
        cout<<"car constructor with parameter called.object being creadted.."<<endl;
        this->name=nameval;
        this->color=col;

    }
    void start(){
        cout<<" car is stated ..."<<endl;
    }
    void stop(){
        cout<<"car is stopped..."<<endl;
    }
    string getname(){
        return name;
    }
    string getcolor(){
        return color;
    }
    car(car &original){
        cout<<"copying original to new..\n";
        name=original.name;
        color=original.color;
    }
};
int main(){
    car c0;
    car c1("ROLLS ROYCE PHANTOM","BLACK");
    car c2("G wagon","BLACK");
    cout<<"car name: "<<c1.getname()<<endl;
    cout<<"car clolor: "<<c1.getcolor()<<endl;
    cout<<"car name: "<<c2.getname()<<endl;
    cout<<"car clolor: "<<c2.getcolor()<<endl;
    car c3(c1);// coping constructor   
     cout<<"car name: "<<c3.getname()<<endl;
    cout<<"car clolor: "<<c3.getcolor()<<endl;
    return 0;
}