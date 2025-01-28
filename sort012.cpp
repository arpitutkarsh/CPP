#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortarray(int arr[], int n){
    int start = 0;
    int end = start +1;
    while(start<end){
        if(arr[start] <= arr[end]){
            end++;
        }
        if(arr[start] > arr[end]){
            swap(arr[start],arr[end]);
            end++;
        }
        start++;

    }


}
int main(){
    int arr[9] = {0,2,2,1,0,1,1,0,1};
    
    
    sortarray(arr,9);
    printarray(arr,9);

    return 0;

}