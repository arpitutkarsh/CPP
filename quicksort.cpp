#include<iostream>
using namespace std;
int partition(int arr[], int start, int end){
    //Choosing starting element as the pivot element
    int pivot = arr[start];
    //Counting the number of elements less than pivot element
    int count = 0;
    for(int i = start+1; i <= end; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    //Now placing the pivot element at an index initialized as pivotindex which is equal to start + count
    int pivotIndex = start + count;
    //For placing pivot element @pivotIndex we will be swapping the element present at pivotIndex with pivotelement
    swap(arr[pivotIndex],arr[start]);
    //Now we will be comparing left and right part of the array
    int i = start;
    int j = end;
    //Now we will be checking a condition that specifies that the left side of the pivotindex must be less than pivot element and 
    //right side of the pivotIndex must be greater than pivotelement
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int start, int end){
    //Base case
    if(start >= end){
        return;
    }

    int p = partition(arr, start, end);
    //sorting left part
    quickSort(arr,start,p-1);
    //sorting right part
    quickSort(arr,p+1,end);
}

int main(){
    int arr[10] = {9,1,5,3,11,7,8,2,6,4};
    int n = 10;

    quickSort(arr,0,n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;
}