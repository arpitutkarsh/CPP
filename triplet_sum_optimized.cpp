#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
Given an array arr of size n and an integer x. Find if there's a triplet in the array which sums up to the given integer x.
Examples
Input:n = 6, x = 13, arr[] = [1,4,45,6,10,8]
Output: 1
Explanation: The triplet {1, 4, 8} in the array sums up to 13.
*/

bool isTriplet(vector<int> arr, int sum){
    int size = arr.size();
    sort(arr.begin(), arr.end());
    for(int i = 0; i < size; i++){
        int start = i+1;
        int end = size-1;
        while(start < end){
            int ans = arr[i] + arr[start] + arr[end];
            if(ans == sum){
                return 1;
            }
            else if(ans > sum){
                end--;
            }
            else{
                start++;
            }
        }

    }
    return 1;
}
int main(){
    vector<int> arr = {1,4,45,6,10,8};
    if(isTriplet(arr,13)){
        cout<<"It is triplet"<<endl;
    }
    else{
        cout<<"Bhaag"<<endl;
    }

    return 0;
}