#include<iostream>
using namespace std;
void reverse_array(int arr[], int l, int r){
    if(l >= r){
        return ;
    }
    swap(arr[l], arr[r]);
    reverse_array(arr,l+1, r-1);
}
void reverse_using_one_pointer(int arr[], int i, int n){
    
    if(i >= n/2){
        return ;
    }
    swap(arr[i], arr[n-i-1]);
    reverse_using_one_pointer(arr, i+1, n);
}
int  main(){
    int arr[5] = {1,2,3,4,5};
    reverse_array(arr, 0, 4);
    int arr1[5] = {3,2,6,4,5};
    reverse_using_one_pointer(arr1,0,5);
    for(int i = 0; i < 5; i++){
        cout << arr[i]<<endl;
    }
    cout<<endl;
    for(int i = 0; i < 5; i++){
        cout << arr1[i]<<endl;
    }
    return 0;
}