#include<iostream>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int row = arr.size();
    int col = arr[0].size();
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int mini = INT_MIN;
    int ans = -1;
    for(int i = 0; i < row; i++){
        int count = 0;
        for(int j = 0; j < col; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(count > mini){
            mini = count;
            ans = i;
        }
    }
    cout<<mini<<endl;
    cout<<ans<<endl;
    return 0;
}