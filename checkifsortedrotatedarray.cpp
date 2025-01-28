#include<iostream>
using namespace std;
bool check(int arr[], int n){
    int counter = 0;
    for(int i = 1; i<n; i++){
        if(arr[i-1] > arr[i]){
            counter++;
        }
    }
    if(arr[n-1] > arr[0]){
        counter ++;
    }

    return counter <= 1;
}
bool oncemorecheck(int arr[], int n){
    int counter = 0;
    for(int i =0; i<n; i++){
        if(arr[i] > arr[(i+1) % n]){
            counter++;
        }
        if(counter>1){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[5] = {3,25,11,19,21};
    cout<<check(arr,5);
    cout<<oncemorecheck(arr,5);






    return 0;
}