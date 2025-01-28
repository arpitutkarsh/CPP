#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int median_brute(vector<vector<int>> &matrix){
    vector<int> arr;
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            arr.push_back(matrix[i][j]);
        }
    }
    sort(arr.begin(), arr.end());
    return arr[(row*col)/2];
}

int main(){
    vector<vector<int>> matrix = {{1,3,5},{2,6,9},{3,6,9}};
    int med = median_brute(matrix);
    cout<<med;
    return 0;
}