#include<iostream>
using namespace std;
class student{
    public:
    //properties
    string name;
    int age;
    float cgpa;
    //methods
    void percentage(){
        cout<<"the percentage is:"<<(cgpa/10)*100<<endl;
    }
};
int main(){
    //object creation
    student s1;
    s1.name ="Isahn";
    s1.age=19;
    s1.cgpa=8.32;
    cout<<s1.name<<endl;
    cout<<s1.cgpa<<endl;
    s1.percentage();
}