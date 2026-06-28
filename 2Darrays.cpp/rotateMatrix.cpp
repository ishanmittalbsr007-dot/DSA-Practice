#include<iostream>
#include<vector>
using namespace std;

    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        for(int k=0;k<4;k++){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int s=0;
        int e=n-1;
        while(s<e){
            for(int i=0;i<n;i++){
                swap(matrix[i][s],matrix[i][e]);
            }
            s++;e--;
        }
    }
    }
int main(){
    vector<vector<int>> matrix = {
                 {1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                {13,14,15,16}};
    rotate(matrix);
    cout<<"the sum of diagonal elements:"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}