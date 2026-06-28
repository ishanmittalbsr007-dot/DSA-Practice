#include<iostream>
using namespace std;
class car{
    string name;
    string color;
    int price;
  
    public:
      int *milege;
    //constructor
    car(){
        cout<<"constructor without paramenter called"<<endl;
    }
    car(string nameval,string col){
        cout<<"car constructor with parameter called.object being creadted.."<<endl;
        this->name=nameval;
        this->color=col;
        milege=new int;//dynamic allocation
        *milege = 10;

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
    car(car &original){//required for deep memory`
        cout<<"copying original to new..\n";
        name=original.name;
        color=original.color;
        milege=original.milege;
    }
};
int main(){
    car c0;
    car c1("ROLLS ROYCE PHANTOM","BLACK");
   car c2(c1);
    cout<< *c2.milege <<endl;
    *c2.milege=12;
    cout<<*c1.milege<<endl;
    cout<<"car name: "<<c1.getname()<<endl;
    cout<<"car clolor: "<<c1.getcolor()<<endl;
    cout<<"car name: "<<c2.getname()<<endl;
    cout<<"car clolor: "<<c2.getcolor()<<endl;
    
}