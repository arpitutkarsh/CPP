#include<iostream>
using namespace std;
void reverseString(int arr[], int n, int k){
    int start = 0;
    int end = start + k-1;
    
    while(start<end){
        swap(arr[start], arr[end]);
        start = start + 2*(k);
        int end = start + k-1;
    }
}
int main(){
    int arr[10] = {11,21,43,54,61,90,12,15,19,21};
    reverseString(arr,7, 2);
    for(int i = 0; i<10; i++){
        cout<<arr[i]<<endl;
    }



    return 0;
}
