#include<iostream>
#include<vector>
using namespace std;
int bubbleSort(vector<int>& arr){
    int n = arr.size();
    vector<int> arrascending = arr;
    vector<int> arrdescening = arr;
    int swaps = 0;
    int swapsi = 0;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(arrascending[j] > arrascending[j+1]){
                swap(arrascending[j], arrascending[j+1]);
                swaps++;
            }
        }  
    }
    for(int i = 1; i<n; i++){
        for(int j = 0; j < n-i; j++){
            if(arrdescening[j] < arrdescening[j+1]){
                swap(arrdescening[j], arrdescening[j+1]);
                swapsi++;
            }
        }
    }
    return min(swaps, swapsi);    
}
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<bubbleSort(arr);
    return 0;
}