//Problem on Binary Search
//We have to return the minimum integer K such that KOKO can eat all the bananas within the H HOURS
//KOKO can only take at max of h hours to eat all bananas
//K is nothing but the speed of eating number of bananas per hour


//The extreme brute force solution that we can think of is start off by considering k as 1 and check for all the elements of the arrsy and find the total time if it exceeds the given time then increase the k
//We know that the maximum value of k will be the maximum of element in the given array, so our answer will possibly be in between 1 to that maximum element


//Here we have a range of answers that will start from 1 to 11(in the particular array {1,3,7,11} ), so whenever we have a range of naswers we can also apply BINARY SEARCH on that range to find the answer




#include<bits/stdc++.h>
using namespace std;
//First we have to find the max element from the given array so that we can find the range on which we have to work on
int findMax(vector<int>& arr){
    int maxi = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int calculateTotalHour(vector<int>& arr, int hourly){
    int totalHours = 0;
    for(int i = 0; i < arr.size(); i++){
        totalHours += ceil((double)arr[i] / (double)hourly);
    }
    return totalHours;
}

int minEatingSpeed(vector<int>& piles, int h){
    int start = 1;
    int end = findMax(piles);
    while(start <= end){
        int mid = start + (end-start)/2;
        int totalHours = calculateTotalHour(piles, mid);
        if(totalHours <= h){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }

    }
    return start;
}
int main(){
    vector<int> arr = {30,11,23,4,20};
    cout<<minEatingSpeed(arr,6);
    return 0;
}