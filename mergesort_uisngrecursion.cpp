#include<iostream>
using namespace std;

void merge(int* arr, int start, int end){
    int mid = start + (end - start)/2;
    //After dividing the array into two parts we are finding the length of both part of the array
    int length1 = mid - start + 1;
    int length2 = end - mid;

    //Creating two array one of length1 and one of length2
    int* firstarray = new int[length1];
    int* secondarray = new int[length2];

    //Now copying the value of first divided array into first array
    //Taking a new integer k and initializing its value with start
    int k = start;
    //Copying the values now
    for(int i = 0; i < length1; i++){
        firstarray[i] = arr[k++];
    }
    //Now initializing the integer k with mid+1;
    k = mid + 1;
    for(int i = 0; i<length2; i++){
        secondarray[i] = arr[k++];
    }
    //Now merging the two array
    int index1 = 0; //Index counter for the first array
    int index2 = 0; //index counter for the second array
    k = start;
    while(index1 < length1 && index2 < length2){
        if(firstarray[index1] < secondarray[index2]){
            arr[k++] = firstarray[index1++];
        } 
        else{
            arr[k++] = secondarray[index2++];
        }
    }
    while(index1 < length1){
        arr[k++] = firstarray[index1++];
    }
    while (index2 < length2)
    {
        arr[k++] = secondarray[index2++];
    }
    
}

void mergesort(int* arr, int start, int end){
    //Basee Casee
    if(start >= end){
        return;
    }

    int mid = start + (end - start)/2;
    //Sorting left part
    mergesort(arr,start,mid);
    //Sorting right part
    mergesort(arr,mid+1,end);

    merge(arr,start,end);
}

int main(){
    int arr[7] = {9,4,21,11,5,3,18};
    mergesort(arr,0,7);

    for(int i = 0; i<7; i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}
