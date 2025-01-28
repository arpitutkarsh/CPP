#include<bits/stdc++.h>
#include<iostream>

using namespace std;
//Better Solution
vector<int> findmissingandRepeating(vector<int>& a){
    int n = a.size();
    int hasharray[n+1] = {0};
    for(int i = 0; i <n; i++){
        hasharray[a[i]]++;
    }
    int repeating = -1;
    int missing = -1;
    for(int i = 1; i <=n; i++){
        if(hasharray[i] == 2){
            repeating = i;
        }
        else if(hasharray[i] == 0){
            missing = i;
        }
        if(repeating!= -1 && missing != -1){
            break;
        }

    }
    return{repeating, missing};
    
}

vector<int> findmissingandrepeating(vector<int> &a){
    long long n = a.size();
    long long SN = (n*(n+1))/2;
    long long S2N = (n*(n+1)*(2*n+1))/6;
    long long S = 0;
    long long S2 = 0;
    for(int i = 0; i < n; i++){
        S = S + a[i];
        S2 = S2 + ((long long)a[i] * (long long)a[i]);
    }
    long long val1 = S - SN;
    long long val2 = S2 - S2N;
    val2 = val2/val1;
    long long x = (val1 + val2)/2;
    long long y = x - val1;
    return {(int)x , (int)y};
}
int main(){
    vector<int> arr = {4,3,2,6,1,1};
    vector<int> ans = findmissingandRepeating(arr);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    vector<int> res = findmissingandrepeating(arr);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}