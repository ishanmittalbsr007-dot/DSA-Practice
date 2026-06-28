#include<iostream>
using namespace std;

class Animal {
public:
    string color;
    void eat() {
        cout << "Animal can eat" << endl;
    }
};

class Mammal : public Animal {
    int foot;
public:
    void setfoot(int f){
        foot=f;
    }
    int getfoot(){
        return foot; 
    }
    void walk() {
        cout << "Mammal can walk" << endl;
    }
};

class Dog : public Mammal {
public:
     string name;
    void bark() {
        cout << "Dog can bark" << endl;
    }
};

int main() {
    Dog d;
d.color="brown";
d.setfoot(2);
d.name="lion";
    d.eat();
    d.walk();
    d.bark();
    cout<<d.name<<endl;
    cout<<d.getfoot()<<endl;
    cout<<d.color<<endl;

    return 0;
}