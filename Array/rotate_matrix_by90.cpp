#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int row = matrix.size();
        
    for(int i = 0; i <row; i++){
        for(int j = 0; j <= i; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i = 0; i < row; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main(){
    vector<vector<int>> array = {{1,2,3},{4,5,6},{7,8,9}};

    rotate(array);
    for(auto it:array){
        for(auto ele: it){
            cout<<ele<<"  ";
        }
        cout<<endl;
    }

    
    return 0;
}