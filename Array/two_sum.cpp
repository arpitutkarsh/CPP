#include<bits/stdc++.h>
using namespace std;
int two_sum_brute(vector<int>& arr, int target){
    int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            if(i == j) continue;
            if(arr[i] + arr[j] == target){
                ans = i+j;
            }
        }
    }
    return ans;
}

string two_sum_better(vector<int>& arr, int target){
    map<int, int> mpp;
    for(int i = 0; i < arr.size(); i++){
        int a = arr[i];
        int required = target - a;
        if(mpp.find(required) != mpp.end()){
            return "YES";
        }
        mpp[a] = i;
    }
    return "NO";
}
string two_sum_optimized(vector<int>& arr, int target){
    int left = 0;
    int right = arr.size()-1;
    sort(arr.begin(), arr.end());
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "TARGET FOUND";
        }
        else if(sum > target){
            right--;
        }
        else{
            left++;
        }
    }
    return "NO TARGET FOUND";
}
int main(){
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    int ans = two_sum_brute(arr, target);
    cout<<ans<<endl;
    string answ = two_sum_better(arr, target);
    cout<<answ<<endl;
    string answe = two_sum_optimized(arr, target);
    cout<<answe<<endl;
    return 0;
}