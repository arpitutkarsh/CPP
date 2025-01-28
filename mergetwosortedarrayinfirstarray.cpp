#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> arr1, int m, vector<int> arr2, int n){
    int i = 0;
    int j = 0;
    int k = 0;
    while(k < (m+n)){
        if(arr1[i] < arr2[j]){
            arr1[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr1[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        arr1[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n){
        arr1[k] = arr2[j];
        j++;
        k++;
    }
}
int main(){
    vector<int> arr1 = {1,3,5,7,11,13,19};
    vector<int> arr2= {2,4,6,9,10,12};
    merge(arr1, 7, arr2, 6);
    for (int i = 0; i < 13; i++)
    {
        cout<<arr1[i];
    }
    
    
    


    return 0;
}