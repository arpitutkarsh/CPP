#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int target){
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int maxLen = 0;
    while(right < arr.size()){
        while(left <= right && sum > target){
            sum -= arr[left];
            left++;
        }
        if(sum == target){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < arr.size()){
            sum += arr[right];
        }
    }
    return maxLen;
}
int main(){
    vector<int> arr = {1,2,3,1,1,1,1,3,3};
    int target = 6;
    int ans = longestSubarray(arr, target);
    cout << ans;
    return 0;
}