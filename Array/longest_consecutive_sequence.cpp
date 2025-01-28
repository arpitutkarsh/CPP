#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longest_consecutive_better(vector<int>& arr){
    //first we will sort the array 
    sort(arr.begin(), arr.end());
    int longest = 1;
    int count_curr = 0;
    int last_smaller = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i]-1 == last_smaller){
            count_curr++;
            last_smaller = arr[i];
        }
        else if(arr[i]-1 != last_smaller){
            count_curr = 1;
            last_smaller = arr[i];
        }
        longest = max(longest, count_curr);
    }
    return longest;


}

int longest_Consecutive_optimal(vector<int>& arr){
    int n = arr.size();
    if(n == 0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }

    for(auto it: st){
        if(st.find(it-1) == st.end()){
            int count = 1;
            int x = it;

            while(st.find(x +1) != st.end()){
                count++;
                x = x+1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}
int main(){
    vector<int> arr = {102, 4, 100, 1 , 101, 3 , 2, 1};
    int ans = longest_consecutive_better(arr);
    cout<<ans<<endl;

    cout<<longest_Consecutive_optimal(arr)<<endl;
    return 0;
}