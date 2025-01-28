#include<bits/stdc++.h>
using namespace std;
int remove_brute(vector<int>& arr){
    set<int> st;
    for(int i = 0; i<arr.size(); i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it:st){
        arr[index] = it;
        index++;
    }

    return index;
}

int remove_optimized(vector<int>& arr){
    int i = 0;
    for(int j = 1; j < arr.size(); j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){

    vector<int> arr = {1,1,2,2,2,3,3};
    int ans = remove_optimized(arr);
    cout<<ans;


    return 0;
}