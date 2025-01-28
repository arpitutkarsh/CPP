#include<bits/stdc++.h>
using namespace std;
void brute_force(vector<int>& arr){
    vector<int> temp;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0; i < temp.size(); i++){
        arr[i] = temp[i];
    }
    int non_zero = temp.size();
    for(int i = non_zero; i < arr.size(); i++){
        arr[i] = 0;
    }
}

void optimal_approach(vector<int>& arr){
    int i = 0;
    for(int j = 0; j < arr.size(); j++){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
    }
}
int main(){
    vector<int> arr = {1,0,2,3,2,0,0,4,5,1};
    //brute_force(arr);
    optimal_approach(arr);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}