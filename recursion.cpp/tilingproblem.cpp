// for 2Xn area with 2X1 tiles

#include<iostream>
using namespace std;
 int tilingProblem(int n){
    if(n==0 || n==1){
        return 1;
    }

    //for verical
    int ans1=tilingProblem(n-1);
    //for horizontal
    int ans2=tilingProblem(n-2);
    return ans1+ans2;

 }
 int main(){
    int n;
    cin>> n;
    int ans = tilingProblem(n);
    cout<< ans;
 }

