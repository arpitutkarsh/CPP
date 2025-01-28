//You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

//Merge nums1 and nums2 into a single array sorted in non-decreasing order.

//The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0;
    int j = 0;
    int k = 0;
    while (i<n && j<m)
    {
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
            
        }
    }
    cout<<i<<" ye i ka value hai "<<endl;
    cout<<j<<" ye j ka value hai "<<endl;
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    
}
int main(){
    int arr1[7] = {1,3,5,7,11,13,19};
    int arr2[6] = {2,4,6,9,10,12};

    int arr3[13] = {0};

    merge(arr1,7,arr2,6,arr3);
    for(int i = 0; i<13; i++){
        cout<<arr3[i]<<endl;
    }



    return 0;
}