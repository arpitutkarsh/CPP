#include<iostream>
#include<vector>
using namespace std;
int thirld_largest(vector<int> arr){
    if(arr.size() < 3){
        return -1;
    }
    int l = arr[0];
    int s = -1;
    int t = -2;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > l){
            t = s;
            s = l;
            l = arr[i];
        }
        else if(arr[i] < l && arr[i] > s){
            t = s;
            s = arr[i];
        }
        else {//if(arr[i] > t){
            t = arr[i];
        }
    }
    return t;
}
int main(){
    vector<int> arr = {2,4,1,3,5};
    vector<int> arr1 = {10,2};
    if(arr.size() < 3){
        cout<<"Kuch bhi"<<endl;
    }
    int largest = arr[0];
    int s = -1;
    int t = -2;
    cout<<"Before loop the largest, second largest and third largest elements are "<<largest<<", "<<s<<", "<<t<<endl;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > largest){
            t = s;
            s = largest;
            largest = arr[i];
            cout<<"After loop the largest, second largest and third largest elements are "<<largest<<", "<<s<<", "<<t<<endl;
            cout<<"The value of i and its element is "<<i<<" "<<arr[i]<<endl;
        }
        else if(arr[i] < largest && arr[i] > s){
            t = s;
            s = arr[i];
            cout<<"After loop the largest, second largest and third largest elements are "<<largest<<", "<<s<<", "<<t<<endl;
            cout<<"The value of i and its element is "<<i<<" "<<arr[i]<<endl;
        }
        else if(arr[i] > t && arr[i] < s){
          t = arr[i];
          cout<<"After loop the largest, second largest and third largest elements are "<<largest<<", "<<s<<", "<<t<<endl;
          cout<<"The value of i and its element is "<<i<<" "<<arr[i]<<endl;
        } 
    }
    cout<<thirld_largest(arr);
    return 0;
}