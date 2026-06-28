#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printBoard(vector<vector<char>> board){
    int n=board.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << board[i][j] <<" ";
        }
        cout<<endl; 
    }
    cout<<"------------------\n";
}
bool isSafe(vector<vector<char>> board, int row,int col){
    int n=board.size();
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }

        for(int i=0;i<col;i++){
            if(board[i][col]=='Q'){
            return false;
        }
        }
    
    for(int i=row,j=col;i>=0&& j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
     for(int i=row,j=col;i>=0&& j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}

int nQueens(vector<vector<char>> board,int row){
    int n= board.size();
    if(row==n){
        printBoard(board);
        return 1;
    }
    int vount=0;
        for(int j=0;j<n;j++){
            if(isSafe(board,row,j)){
            board[row][j]='Q';
         vount+=   nQueens(board, row+1);
         
            board[row][j]='.';
        }
    }
    return vount;
}

int main(){
    vector<vector<char>> board;
    int n=5;
    for(int i=0;i<n;i++){
        vector<char> newRow;
        for(int j=0;j<n;j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    printBoard(board);
    nQueens(board,0);
    int c=nQueens(board,0);
    cout<< "cont"<< c;
}