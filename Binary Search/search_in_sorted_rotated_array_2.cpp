#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int target){
    int n = arr.size();
    int start = 0; 
    int end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target) return true;

        if(arr[start] == arr[mid] && arr[mid] == arr[end]){
            start++;
            end--;
            continue;
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
    return false;
}
int main(){
    vector<int> arr = {7,8,1,1,2,3,3,3,4,5,6};
    int target = 3;
    int ans = search(arr, target);
    cout<<ans;
    return 0;
}