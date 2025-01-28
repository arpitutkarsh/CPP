#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat = {{0,1,0}, {0,0,0}, {0,1,0}};
    int row = mat.size();
    int col = mat[0].size();
    bool* rows = new bool[row];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int thatcol = 0;
    int newRow;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            
            if(mat[i][j] == 1){
                cout<<"The column for the element of matrix equal to 1 is: "<<j<<endl;
                newRow = j;
            }
            while(mat[newRow][j] )

        }
    }
    for(int i = 0; i < col; i++){
        cout<<mat[newRow][i]<<" ";
    }
    

    return 0;
}