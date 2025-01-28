#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void sort012(vector<int>& arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main(){
    vector<int> arr1 = {0,1,2,0,1,2,1,2,0,0,0,1};
    sort012(arr1);
    for(int i = 0;i<arr1.size();i++){
        cout<<arr1[i]<<endl;
    }
    return 0;
}