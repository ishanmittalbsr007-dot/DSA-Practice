#include<iostream>
using namespace std;
class comoplex{
    int real;
    int img;
    public:
    comoplex(int r,int i){
        real =r;
        img=i;
    }
    void showcoplex(){ 
        cout<<real<<" + "<<img <<"i"<<endl;
    }
    void operator + (comoplex &obj){
        int resReal=this->real + obj.real;
        int resimg=this->img + obj.img;
        comoplex c3(resReal,resimg);
        cout << "result= ";
        c3.showcoplex();
    }
    void operator-(comoplex &obj){
        int resReal=this->real - obj.real;
        int resImg= this->img - obj.img;
        comoplex c3(resReal,resImg);
        cout<< "result= ";
        c3.showcoplex();
    }
};
int main(){
    comoplex c1(1,2);
    comoplex c2(2,4);
    c1.showcoplex();
    c2.showcoplex();
    c1+c2;
   c2-c1;
    
}