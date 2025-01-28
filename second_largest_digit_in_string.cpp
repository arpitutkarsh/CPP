#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    /*
    int i = 0;
    int arr[i];
    arr[i] = 4;
    i++;
    arr[i] = 2;
    i++;
    arr[i] = 14;
    for(int j = 0; j <= i; j++){
        cout<<arr[j]<<endl;
    }
    */
   vector<int> arr = {2,2};
   for(int i = 0; i < arr.size(); i++){
        if(arr[i] == arr[i+1]){
            arr.erase(i+1);
        }
   }
    return 0;
}