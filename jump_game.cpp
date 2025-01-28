#include<iostream>
using namespace std;
bool canJump(int arr[], int n){
    int i = 1;
    while(i<n){
        if(arr[i] == arr[n-1]){
            return true;
        }
        else{
            i = i+arr[i];
            break;
        }
    }
    return false;
    
}

int main(){
    int arr1[5] = {2,3,1,1,4};
    int arr2[5] = {3,2,1,0,4};
    int n = 5;
    int i = 1;
    
    while(i<n){
        
        if(arr2[i] == arr2[n-1]){
            cout<<"Equal to hai"<<endl;
            
        }
        else{
            i = i+arr2[i];
            cout<<"i is "<<i<<endl;
            
        }
        
    }
    
    
    
    
    cout<<canJump(arr1,5)<<endl;
    cout<<canJump(arr2,5)<<endl;

    return 0;
}