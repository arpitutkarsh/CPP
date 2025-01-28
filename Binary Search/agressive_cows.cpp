#include<bits/stdc++.h>
using namespace std;
//You are given an array with unique elements of the stalls[] array, which denotes the position of the stall. You are also given an integer
//k, which denotes the number of agressive cows. Your task is to assign stalls to k cows such that the minimum distance between two of them is maximum possible.
bool canwePlace(vector<int>& stalls, int distance, int cows){
    int count_cows = 1;
    int last_position = stalls[0];
    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i] - last_position >= distance){
            count_cows++;
            last_position = stalls[i];
        }
        if(count_cows >= cows){
            return true;
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k) {
        // Write your code here
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size()-1] - stalls[0];
    while(start <= end){
        int mid = start + (end-start)/2;
        if(canwePlace(stalls, mid, k) == true){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return end;
}

int main(){
    vector<int> stalls = {0,3,4,7,9,10};
    int cows = 4;
    cout<<aggressiveCows(stalls, cows);
    int *p = &cows;
    cout<<p<<"\n";
    cout<<&p<<"\n";
    return 0;
}