#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//To round the number to nearest integer greater than or equal to that number we use ceil((double)7/3)
int sum(vector<int>& nums, int mid){
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += ceil((double)nums[i]/mid);
    }
    return sum;
}
int smallestDivisor(vector<int>& nums, int threshold){
    int n = nums.size();
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        maxi = max(nums[i], maxi);
        mini = min(nums[i], mini);
    }
    int start = mini;
    int end = maxi;
    while(start <= end){
        int mid = start + ceil((double)end - start)/2;
        if(sum(nums, mid) > threshold){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
    }
    
    return start;
}
int main(){

    //cout<<41+ceil((double)(44-41)/2)<<endl;
    //cout<<ceil((double)44/40)<<endl;
    
    vector<int> nums = {1,2,5,9};
    int threshold = 6;

    cout<<smallestDivisor(nums, threshold);
    return 0;
}