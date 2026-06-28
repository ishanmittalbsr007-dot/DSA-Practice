#include<iostream>
using namespace std;

class Animal {
public:
string color;
    void eat() {
        cout << "Animal can eat" << endl;
    }
    void breath(){
        cout<<"breath\n";
    }
};

class fish : public Animal {
public:
int fins;
    void swim() {
        cout << "swim" << endl;
    }
};

int main() {
    fish d;
    d.fins=3;
    cout<<d.fins<<endl;
    d.color="yellow";
    cout<<d.color<<endl;

    d.eat();
    d.breath();   // Inherited function
    d.swim();  // Own function

    return 0;
}