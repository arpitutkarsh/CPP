#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maximum_sum_brute(vector<int>& arr){
    int maxi = INT_MIN;
    for(int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for(int j = i; j < arr.size(); j++){
            sum =+ arr[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;

}

long long maximum_subarray_sum_optimized(vector<int>& arr){
    int n = arr.size();
    long long sum = 0;
    long long maxi = LLONG_MIN;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
        }
        if(sum < 0){
            sum = 0;
        }

    }
    //if we want to consider the sum of empty subarray 
    //if(maxi < 0){
    //maxi = 0;
    //}
    return maxi;
}
int main(){
    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    cout<<maximum_sum_brute(arr)<<endl;;
    cout<<maximum_subarray_sum_optimized(arr);
    return 0;
}