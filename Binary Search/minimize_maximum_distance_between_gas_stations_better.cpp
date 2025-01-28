#include<bits/stdc++.h>
using namespace std;
long double minimizemaxdis(vector<int>& arr, int k){
    int n = arr.size();
    vector<int> howMany(n-1, 0);
    priority_queue<pair<long double, int>> pq;
    for(int i = 0; i < n-1; i++){
        pq.push({arr[i+1] - arr[i], i});

    }
    for(int gasStations = 1; gasStations <= k; gasStations++){
        auto tp = pq.top(), pq.pop();
        int section_index = tp.second;
        howMany[section_index]++;
        long double diff = arr[section_index+1] - arr[section_index];
        long double newSectionlength = diff / (long double)(howMany[section_index+1]);
        pq.push({})
    }
}