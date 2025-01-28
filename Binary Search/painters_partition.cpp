#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int painters(vector<int>& walls, int mid){
    int painters = 1;
    int arraySum = 0;
    for(int i = 0; i < walls.size(); i++){
        if(arraySum + walls[i] <= mid){
            arraySum += walls[i];
        }
        else{
            painters++;
            arraySum = walls[i];
        }
    }
    return painters;
}

int painterPartition(vector<int>& walls, int k){
    int start = *max_element(walls.begin(), walls.end());
    int end = accumulate(walls.begin(), walls.end(), 0);
    if(k > walls.size()){
        return -1;
    }

    while(start <= end){
        int mid = start + (end - start)/2;
        int n = painters(walls, mid);
        if(n > k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return start;
}

int main(){
    vector<int> walls = {10,20,30,40};
    int k = 2;
    cout<<painterPartition(walls, k);
    return 0;
}