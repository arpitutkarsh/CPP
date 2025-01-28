#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int numberofgasStations(long double distance, vector<int>& arr){
    int count = 0;
    for(int i = 1; i < arr.size(); i++){
        int numberinbetween = ((arr[i] - arr[i-1])/distance);
        if((arr[i] - arr[i-1]) / distance == numberinbetween+distance){
            numberinbetween--;
        }
        count += numberinbetween;
    }
    return count;
}
    
double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
    int n = stations.size();
    long double low = 0;
    long double high = 0;
    for(int i = 0; i < n-1; i++){
        high = max(high, (long double)(stations[i+1] - stations[i]));
    }
    long double diff = 1e-6;
    while(high - low > diff){
        long double mid = (low + high)/(2.0);
        int count = numberofgasStations(mid, stations);
        if(count > k){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    return high;
}
int main(){
    vector<int> stations = {3,6,12,19,33,44,67,72,89,95};
    int k = 2;
    cout<<(long double)findSmallestMaxDist(stations, k);
    return 0;
}