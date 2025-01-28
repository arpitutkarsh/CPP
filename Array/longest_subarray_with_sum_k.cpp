#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int longestsubarraywithsumK(vector<int>& arr, long long k){
    map<long long, int> preSum;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - k;
        if(preSum.find(rem) != preSum.end()){
            int len = i - preSum[rem];
            maxLen = max(maxLen, len);
        }
        if(preSum.find(sum) == preSum.end()){
            preSum[sum] = i;
        }
        
    }
    return maxLen;
}
int main(){
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    long long k = 3;
    int ans = longestsubarraywithsumK(arr,k);
    cout<<ans;
    return 0;
}