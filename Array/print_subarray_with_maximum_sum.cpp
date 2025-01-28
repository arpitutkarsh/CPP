#include<bits/stdc++.h>
using namespace std;
long long maximum_subarray_sum(vector<int>& arr){
    int n = arr.size();
    long long sum = 0;
    long long maxi = LLONG_MIN;
    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for(int i = 0; i < n; i++){
        if(sum == 0){
            start = i;
        }
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    cout<<"The subarray with the maximum sum is: [";
    for(int i = ansStart; i <= ansEnd; i++){
        cout<<arr[i] <<", ";
    }
    cout<<"]"<<endl;

    return maxi;

}
int main(){
    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    cout<<maximum_subarray_sum(arr)<<endl;
    return 0;
}