#include<iostream>
#include<vector>
using namespace std;
bool present(vector<int>& arr, int t){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == t){
            return true;
        }
    }
    return false;
}
int longestconsecutive(vector<int>& arr){
    int maxLength = 1;
    if(arr.size() == 0){
        return 0;
    }
    for(int i = 1; i < arr.size(); i++){
        int x = arr[i];
        int count = 1;
        while(present(arr,x+1)){
            count++;
            x = x+1;
        }
        maxLength = max(count,maxLength);
    }
    return maxLength;
}
int main(){
    vector<int> arr = {-1,0,1};
    int size = arr.size();
    cout<<longestconsecutive(arr);
    return 0;
}