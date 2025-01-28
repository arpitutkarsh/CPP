#include<iostream>
using namespace std;
void swapalt(int arr[], int size){
    for(int i =0;i<size; i = i+2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }
}
void printarr(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6] = {2,6,1,4,3,2};
    int brr[5] = {1,2,8,7,5};
    swapalt(arr,6);
    swapalt(brr,5);

    printarr(arr,6);
    printarr(brr,5);

    
    return 0;
}