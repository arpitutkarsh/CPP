//Given an array of size N and given number of painters that is [K] and to paint 1 unit board it takes 1 unit time. Painters can only paint continuous section of board. Find the min time to paint the entire board
#include<iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pagesum = 0;
    for(int i = 0; i<n; i++){
        if(pagesum + arr[i] <= mid){
            pagesum = pagesum + arr[i];

        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
        }
        pagesum = arr[i];
    }
    return true;
}
int allocatebooks(int arr[], int n, int m){
    int start = 0;
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum = sum + arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = sum + (end-sum)/2;
    while(start<end){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = sum+(end-sum)/2;
    }
    return ans;
}

int main(){
    int n = 4;
    int arr[n] = {10,20,30,40};
    int m = 2;
    cout<<"H";
    allocatebooks(arr,n,m);
    cout<<"";
    return 0;
}
