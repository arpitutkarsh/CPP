//1423. Maximum Points You Can Obtain from Cards
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2,2,2};
    int i = 0;
    int j = arr.size()-1;
    int sum = 0;
    int count = 0;
    int k = 2;
    while(i <= j && count < k){
        //int sum = 0;
        cout<<"In the beginning of the while loop the value of i = "<<i<<", the value of j = "<<j<<", and the value of count is = "<<count<<endl;
        if(arr.size() == k){
            sum = sum + arr[i];
            i++;
            //count++;
        }
        else if(arr[i] > arr[j]){
            sum = sum + arr[i];
            i++;
            count++;
        }
        else if(arr[i] < arr[j]){
            sum = sum + arr[j];
            j--;
            count++;
        }
        else //if(arr[i] == arr[j])
        {
            sum = sum + arr[i];
            i++;
            j--;
            count++;
        }
        cout<<"SUm is: "<<sum<<endl;
    }
}