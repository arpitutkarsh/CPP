#include<iostream>
using namespace std;
bool finddup(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }
    for(int i = 1; i<n; i++){
        ans = ans^i;
        if(ans == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int arr[10] = {1,1,1,3,3,4,3,2,4,2};
    cout<<finddup(arr,10);
    
    
    
    
    
    
    
    
    
    

    return 0;
}