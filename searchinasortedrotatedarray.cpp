#include<iostream>
using namespace std;
int getpivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}
int binarysearch(int arr[], int n, int start, int end, int target){
    int mid = start + (end-start)/2;
    while(start<=mid){
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int real(int array[], int n, int target){
    int pivot = getpivot(array,n);
    if(target>=array[pivot] && target<=array[n-1]){
        return binarysearch(array,n,pivot,n-1,target);
    }
    else{
        return binarysearch(array,n,array[0],pivot-1,target);
    }


}
int main(){
    int array[2] = {1,3};
    int target = 1;
    cout<<real(array,2,target);




    return 0;
}