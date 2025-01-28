#include<iostream>
using namespace std;
int sumarr(int arr[], int n){
    int sum = 0;
    for(int i =0; i<n; i++){
        sum = sum + arr[i];
    }

    return sum;
}
int main(){
    int arr[5] = {3,7,-9,6,4};

    cout<<"The sum of the array is "<<sumarr(arr, 5)<<endl;
    return 0;
}