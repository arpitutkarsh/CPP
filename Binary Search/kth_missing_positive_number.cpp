#include<iostream>
#include<vector>
using namespace std;

int findMissingBrute(vector<int>& arr, int k){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] <= k){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}

int findKthMissingOptimized(vector<int>& arr, int k){
    int start = 0;
    int end = arr.size()-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        int missing = arr[mid] - (mid+1);
        if(missing < k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return end+k+1;
}
int main(){
    vector<int> arr = {1,3,4,5,7};
    int k = 2;
    cout<<findMissingBrute(arr, k);
    cout<<endl;
    cout<<findKthMissingOptimized(arr,k);
    return 0;
}