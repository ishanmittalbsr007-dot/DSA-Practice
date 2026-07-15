#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printSudulo(int suduko[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<suduko[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool isSafe(int sudoku[9][9],int row,int col,int k){
    //vertical 
    for(int i=0;i<9;i++){
        if(sudoku[i][col]==k){
           return false;
        }
    }
    //horizontal
    for(int i=0;i<9;i++){
        if(sudoku[row][i]==k){
           return false;
        }
    }
    // grid
    int sr = (row/3)*3;
    int sc = (col/3)*3;
    for(int i=sr;i<=sr+2;i++){
        for(int j=sc;j<=sc+2;j++){

            if(sudoku[i][j]==k){
                return false;
            }
        }
    }
    return true;


}
 bool sudokuSolver(int sudoku[9][9],int row,int col){
    if(row==9){
        printSudulo(sudoku);
        return true;
    }
    int nextrow=row;
    int nextCol=col+1;
    if(col+1==9){
        nextrow=row+1;
        nextCol=0;
    }

    if(sudoku[row][col] !=0){
       return sudokuSolver(sudoku,nextrow,nextCol);
    }
    for(int k=1;k<=9;k++){
        if(isSafe(sudoku,row,col,k)){
            sudoku[row][col]=k;
           if(sudokuSolver(sudoku, nextrow,nextCol)){
            return true;
           }
           sudoku[row][col]=0;
        }
    }
    return false;
 }

int main(){
   int board[9][9] = {
    {5,3,0,0,7,0,0,0,0},
    {6,0,0,1,9,5,0,0,0},
    {0,9,8,0,0,0,0,6,0},
    {8,0,0,0,6,0,0,0,3},
    {4,0,0,8,0,3,0,0,1},
    {7,0,0,0,2,0,0,0,6},
    {0,6,0,0,0,0,2,8,0},
    {0,0,0,4,1,9,0,0,5},
    {0,0,0,0,8,0,0,7,9}
};
sudokuSolver(board,0,0);
}