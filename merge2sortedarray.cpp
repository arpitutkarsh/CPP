#include<bits/stdc++.h>
using namespace std;
void mergeSorted(int arr1[], int arr2[], int n, int m){
    int arr3[n+m];
    int left = 0;
    int right = 0;
    int index = 0;
    while(left < n && right < m){
        if(arr1[left] <= arr2[right]){
            arr3[index] = arr1[left];
            left++;
            index++;
        }
        else{
            arr3[index] = arr2[right];
            right++;
            index++;
        }
    }
    while(left < n){
        arr3[index] = arr1[left];
        index++;
        left++;
    }
    while(right < n){
        arr3[index] = arr2[right];
        index++;
        right++;
    }
    for(int i = 0; i < n+m; i++){
        if(i<n){
            arr1[i] = arr3[i];
        }
        else{
            arr2[i-n] = arr3[i];
        }
    }
}
void mergesortedoptimal(int arr1[], int arr2[], int n, int m){
    int left = n-1;
    int right = 0;
    while(left >= 0 && right < m){
        if(arr1[left] > arr2[right]){
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
}
void swapifbigger(int arr1[], int arr2[], int ind1, int ind2){
    if(arr1[ind1] > arr2[ind2]){
        swap(arr1[ind1], arr2[ind2]);
    }
}
void mergegapmethod(int arr1[], int arr2[], int n, int m){
    int len = n + m;
    int gap = (len / 2) + (len % 2);
    while(gap > 0){
        int left = 0;
        int right = left + gap;
        while(right < len){
            if(left < n && right >= n){
                swapifbigger(arr1, arr2, left, right-n);
            }
            else if(left >= n){
                swapifbigger(arr2, arr2, left-n, right - n);
            }
            else{
                swapifbigger(arr1, arr2, left, right);
            }
            left++;
            right++;
        }
        if(gap == 1){
            break;
        }
        gap = (gap/2) + (gap%2);
    }
}
int main(){
    int arr1[4] = {1,3,5,7};
    int n = 4;
    int arr2[4] = {0,2,6,8};
    int m = 4;
    mergeSorted(arr1,arr2,n,m);
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    for(int j = 0; j < m; j++){
        cout<<arr2[j]<<" ";
    }
    cout<<endl;
    mergesortedoptimal(arr1,arr2,n,m);
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    for(int j = 0; j < m; j++){
        cout<<arr2[j]<<" ";
    }
    cout<<endl;
    mergegapmethod(arr1, arr2, n, m);
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    for(int j = 0; j < m; j++){
        cout<<arr2[j]<<" ";
    }
    return 0;
}