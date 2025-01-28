#include<iostream>
using namespace std;
void reversearray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[7] = {21,17,233,12,0,434,2};
    reversearray(arr,7);
    for(int i = 0; i<7; i++){
        cout<<arr[i]<<endl;
    }



    return 0;
}