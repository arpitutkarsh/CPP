#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& arr, int mid){
    int count = 1;
    int arraySum = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arraySum + arr[i] <= mid){
            arraySum += arr[i];
        }
        else{
            count++;
            arraySum = arr[i];
        }
    }
    return count;
}

int splitArray(vector<int>& walls, int k){
    int start = *max_element(walls.begin(), walls.end());
    int end = accumulate(walls.begin(), walls.end(), 0);
    if(k > walls.size()){
        return -1;
    }

    while(start <= end){
        int mid = start + (end - start)/2;
        int n = subarraySum(walls, mid);
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
    cout<<splitArray(walls, k);
    return 0;
}