#include<bits/stdc++.h>
//This is a question of Binary search on Answers.
//We know that the minimum capacity of the ship should be the maximum element of the array, as if it is less than the maximum element of the array
//it could not carry the packages with weights more than that minimum capacity and the maximum capacity would  be the sum of all array elements

using namespace std;
int findDays(vector<int>& weights, int capacity){
    int days = 1;
    int load = 0;
    for(int i = 0; i < weights.size(); i++){
        if(weights[i] + load > capacity){
            days++;
            load = weights[i];
        }
        else{
            load += weights[i];
        }
    }
    return days;
}
int shipWithinDays(vector<int>& weights, int days){
    int start = *max_element(weights.begin(), weights.end());
    int end = accumulate(weights.begin(), weights.end(), 0);
    while(start <= end){
        int mid = start + (end-start)/2;
        int numberofDays = findDays(weights, mid);
        if(numberofDays <= days){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return start;
}
int main(){
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    cout<<shipWithinDays(weights,5);
    return 0;
}