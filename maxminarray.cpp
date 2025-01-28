#include<iostream>
#include<math.h>
using namespace std;

void enterarr(int arr[],int n){
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
}

int maxarr(int arr[],int n){
    int min = INT32_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>min){
            min = arr[i];
        }
    }
    return min;
}
int minarr(int arr[],int n){
    int maxg = INT32_MAX;
    for(int i = 0; i<n; i++){
        /*if(arr[i]<max){
            max = arr[i];
        }*/
        maxg =  min(maxg , arr[i]);

    }
    
    return maxg;

}
int main(){
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    int arrayy[n];
    
    
    

    enterarr(arrayy,n);
    cout<<"The maximum element in the array is "<<maxarr(arrayy,n)<<endl;
    cout<<"The minimum element of the array is "<<minarr(arrayy,n)<<endl;


    
    //int min = INT32_MIN;

    /*
    for(int i = 0; i<5; i++){
        if(arrayy[i]>min){
            min = arrayy[i];

        }
    }
    */

    
    
    return 0;
    

}

