#include<iostream>
using namespace std;

class Teacher {
public:
int salary;
string subject;
    void teach() {
        cout << "Teaching students" << endl;
    }
};

class Student {
public:
int roll_no;
float cgpa;
    void study() {
        cout << "Studying subjects" << endl;
    }
};

class Person : public Teacher, public Student {
public:
    void display() {
        cout << "Person is both teacher and student" << endl;
    }
};

int main() {
    Person p;
    p.salary=500;
    p.subject ="Maaths";
    p.cgpa=8.32;
    p.roll_no=21;
    cout<<p.salary<<endl;
    cout<<p.subject<<endl;
    cout<<p.cgpa<<endl;

    p.teach();
    p.study();
    p.display();

    return 0;
}