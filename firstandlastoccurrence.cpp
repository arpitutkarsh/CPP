#include<iostream>
using namespace std;
int firstocc(int arr[],int n, int key){
    int start = 0;
    int end= n-1;
    int mid = start + ((end-start)/2);
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + ((end-start)/2);
    }
    return ans;
}
int rightocc(int arr[],int n, int trgt){
    int start = 0;
    int end= n-1;
    int mid = start + (end-start)/2;
    int dans =-1;
    while(start<=end){
        if(arr[mid] == trgt){
            dans = mid;
            start = mid+1;
        }
        if(arr[mid] > trgt){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + ((end-start)/2);

    }
    return dans;
}
int main(){
    int arr[8]={6,31,31,31,31,31,31,61};
    int target = 31;
    cout<<firstocc(arr,8,31)<<endl;
    cout<<rightocc(arr,8,31)<<endl;




    return 0;
}