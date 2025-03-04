#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& arr){
    int start = 0;
    int end = arr.size()-1;
    int ans = INT_MAX;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[start] <= arr[mid]){
            ans = min(ans, arr[start]);
            start = mid + 1;
        }
        else{
            ans = min(ans, arr[end]);
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int ans = findMin(arr);
    cout<<ans;
    return 0;
}