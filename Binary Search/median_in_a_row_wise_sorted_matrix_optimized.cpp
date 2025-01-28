#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>&arr, int x, int n){
    int low = 0;
    int high = n - 1;
    int ans = n;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int countSmallEqual(vector<vector<int>>& matrix, int n, int m, int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        count+= upperBound(matrix[i], x, m);
    }
    return count;
}
int median(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    int low = INT_MAX;
    int high = INT_MIN;
    for(int i = 0; i < n; i++){
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][m-1]);
    }

    int req = (n*m)/2;
    while(low <= high){
        int mid = (low + high)/2;
        int smallEqual = countSmallEqual(matrix, n,m,mid);
        if(smallEqual <= req){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5},{2,6,9},{3,6,9}};
    int med = median(matrix);
    cout<<med;
    return 0;
}