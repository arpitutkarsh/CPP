//Leaders in an array means that every element on the right side of it should be smaller than the leader element
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>& arr){
    int n = arr.size();

    int greatest_till_now = arr[n-1];
    vector<int> leaders_array;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] >= greatest_till_now){
            leaders_array.push_back(arr[i]);
            greatest_till_now = arr[i];
        }
    }
    reverse(leaders_array.begin(), leaders_array.end());
    return leaders_array;
}
int main(){
    vector<int> arr = {10,4,2,4,1};
    vector<int> ans = leaders(arr);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}