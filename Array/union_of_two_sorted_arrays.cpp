#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> union_brute(vector<int>& arr1, vector<int>& arr2){
    set<int> st;
    for(int i = 0; i < arr1.size(); i++){
        st.insert(arr1[i]);
    }
    for(int i = 0; i < arr2.size(); i++){
        st.insert(arr2[i]);
    }

    vector<int> unio;
    for(auto it : st){
        unio.push_back(it);
    }
    return unio;
}

vector<int> union_optimal(vector<int>& a, vector<int>& b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.back() != b[j] || unionArr.size() == 0){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i < n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }
    while(j < n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }
    return unionArr;
}
int main(){
    vector<int> a1 = {1,1,2,3,4,5};
    vector<int> a2 = {2,3,4,5,5,6};
    //vector<int> ans = union_brute(a1, a2);
    vector<int> ans = union_optimal(a1,a2);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}