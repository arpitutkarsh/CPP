#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int majority_element(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        int count = 0;
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count > arr.size()/2){
            return arr[i];
        }
    }
}

int majority_element_better(vector<int>& arr){
    map<int, int> mpp;
    for(int i = 0; i < arr.size(); i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second > arr.size()/2){
            return it.first;
        }
    }
    return -1;
}
int majority_element_opti(vector<int>& arr){
    int el;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(count == 0){
            count = 1;
            el = arr[i];
        }
        else if(arr[i] == el){
            count++;
        }
        else{
            count--;
        }
    }
    int count1 = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == el){
            count1++;
        }
    }
    if(count1 > arr.size()/2){
        return el;
    }
    return -1;
}

int main(){
    vector<int> arr = {2,2,3,3,1,2,2};
    int ans = majority_element(arr);
    cout<<ans<<endl;
    int answe = majority_element_better(arr);
    cout<<answe<<endl;
    return 0;

}
