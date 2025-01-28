#include<bits/stdc++.h>
using namespace std;
void leftRotate_brute(vector<int>& arr, int rotateBy){
    rotateBy = rotateBy % arr.size();
    int temp[rotateBy]; //Creating a temporary array to store the first d element of array
    for(int i = 0; i < rotateBy; i++){
        temp[i] = arr[i];
    }

    //Now shifting 
    for(int i = rotateBy; i < arr.size(); i++){
        arr[i - rotateBy] = arr[i];
    }
    //now putting back the array
    for(int i = arr.size() - rotateBy; i < arr.size(); i++){
        arr[i] = temp[i - (arr.size() - rotateBy)];
    }
}
/*
void leftRotate_somewhatoptimal(vector<int>& arr, int d){
    vector<int> temp(arr.size());
    for(int i = 0; i < arr.size(); i++){
        temp[(i + d) % arr.size()] = arr[i];
    }
    arr = temp;
}
*/
void leftRotate(vector<int>& arr, int d){
    int n = arr.size();
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr + n);
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int rotate = 3;
    leftRotate(arr, rotate);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i];
    }
    return 0;
}