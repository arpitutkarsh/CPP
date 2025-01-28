#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> arr, int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {1,2,2,1,1,3};
    vector<int> freq;
    sort(arr.begin(),arr.end());
    cout<<"Sorted Array is: ";
    print(arr,arr.size());
    int count = 1;
    for(int i = 1; i < arr.size(); ++i){
        cout<<"The value of i is: "<<i<<endl;
        if(arr[i] == arr[i-1]){
            ++count;
            cout<<"The value of count is: "<<count<<endl;
        }
        else{
            freq.push_back(count);
            cout<<"Printing frequency: "<<endl;
            print(freq,freq.size());
            count = 1;
        }
    }
    freq.push_back(count);
    print(freq,freq.size());
    for(int i = 1; i<freq.size(); ++i){
        if(freq[i] == freq[i-1]){
            cout<<"Sorry!! I cant love you"<<endl;
        }
        else{
            cout<<"I love you too!"<<endl;
        }
    }
    
    
    return 0;
}