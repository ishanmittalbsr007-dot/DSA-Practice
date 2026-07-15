#include<iostream>
using namespace std;
class student{

    //properties
    string name;
    int age ;
    float cgpsa;
    //methods
    public:
    void getpercentage(){
        cout<<"opercentage is :"<<(cgpsa/10)*100<<endl;
    }
    //setter
    void setname(string namevalue){
        name =namevalue;
    }
    void setcgpa(float cgpaval){
        if(cgpaval>=0 && cgpaval<=10)
        cgpsa=cgpaval;
    
    else{
        cout<<"invalid cgpa"<<endl;
    }
    }
    //getter
    string getname(){
        return name;
    }
    float getcgpa(){
        return cgpsa;
    }

};
int main(){
    student s1;
    s1.setname("Ishan mittal");
    s1.setcgpa(8.32);
    cout<<s1.getname()<<endl;
    cout<<s1.getcgpa()<<endl;
    s1.getpercentage();
}