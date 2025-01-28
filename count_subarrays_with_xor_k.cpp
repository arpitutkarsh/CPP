#include<bits/stdc++.h>
using namespace std;
int brute_force(vector<int>& arr, int n){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            int d = 0;
            for(int k = i; k <= j; k++){
                d = d ^ arr[k];
            }
            if(d == n){
                count++;
            }
        }
    }
    return count;
}
int better_approach(vector<int>& arr, int k){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        int xoru = 0;
        for(int j = i; j < arr.size(); j++){
            xoru = xoru ^ arr[j];
            if(xoru == k){
                count++;
            }
        }
    }
    return count;
}
int optimal_approach(vector<int>& arr, int k){
    int xr = 0;
    map<int,int> mpp;
    mpp[xr]++;  //{0,1}
    int count = 0;
    for(int i = 0; i<arr.size(); i++){
        xr = xr ^ arr[i];
        //We are looking for k
        int x = xr ^ k;
        count += mpp[x];
        mpp[xr]++;
    }
    return count;
}
int main(){
    vector<int> arr = {4,2,2,6,4};
    int k = 6;
    cout<<"Answer in BRUTE FORCE APPROACH "<<brute_force(arr,k);
    cout<<endl;
    cout<<"Answer in BETTER APPROACH "<<better_approach(arr,k);
    cout<<endl;
    cout<<"Answer in OPTIMAL APPROACH "<<optimal_approach(arr,k);
    return 0;
}