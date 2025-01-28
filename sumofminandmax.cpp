#include<iostream>
using namespace std;
int mini(int arr[], int n){
    int max = INT32_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < max){
            max = arr[i];
        }
    }
    return max; 
}
int maxi(int arr[], int n){
    int min = INT32_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > min){
            min = arr[i];
        }
    }
    return min;
};
int suma(int a, int b){
    int sum = a + b;
    return sum;
};
int overall(int arr[], int n){
    int max = INT32_MAX;
    int min = INT32_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] < max){
            max = arr[i];
        }
        if(arr[i] > min){
            min = arr[i];
        }
    }
    int sum = max + min;
    return sum;
}


int main(){
    int arr[1] = {-1};
    int a = mini(arr,1);
    int b = maxi(arr,1);
    cout<<"Minimum"<<endl;
    cout<<a<<endl;
    cout<<"Maximum"<<endl;
    cout<<b<<endl;
    cout<<"sum"<<endl;
    cout<<suma(a,b)<<endl;
    cout<<"Actual"<<endl;
    cout<<overall(arr,1)<<endl;
    
    return 0;
}
