#include<iostream>
#include<vector>
using namespace std;
bool isOdd(int n){
    if(n%2 == 0){
        return 1;
    }
    return 0;
}
vector<int> parity(vector<int>& arr){
    int start = 0;
    int end = arr.size();
    while(start<end){
        if(isOdd(arr[start]) && !isOdd(arr[end])){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        if(!isOdd(arr[start])){
            start++;
        }
        else{
            end--;
        }
    }
    return arr;
}
int main(){
    vector<int> arr = {3,1,2,4};
    cout<<!isOdd(4);
    cout<<isOdd(4);

    return 0;
}