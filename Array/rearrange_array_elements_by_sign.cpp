#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange_array_elements(vector<int>& arr){
    int n = arr.size();
    vector<int> pos;
    vector<int> neg;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

    for(int i = 0; i < n/2; i++){
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
    return arr;

}

vector<int> rearrange_array_elements_optimized(vector<int>& arr){
    vector<int> ans(arr.size(), 0);
    int posIndex = 0;
    int negIndex = 1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < 0){
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else{
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {3,1,-2,-5,2,-4};
    vector<int> ans = rearrange_array_elements(arr);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }

    vector<int> answerhai = rearrange_array_elements_optimized(arr);
    for(int i = 0; i < answerhai.size(); i++){
        cout<<answerhai[i]<<endl;
    }
    return 0;
}