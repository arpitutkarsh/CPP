#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int target){
    int start = 0;
    int end = arr.size()-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            return mid;
        }

        if(arr[start] <= arr[mid]){
            if(arr[start] <= target && arr[mid] >= target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(arr[mid] <= target && arr[end] >= target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {7,8,9,1,2,3,4,5,6};
    int target = 1;
    int ans = search(arr, target);
    cout<<ans;
    return 0;
}