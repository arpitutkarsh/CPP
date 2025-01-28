#include<bits/stdc++.h>
using namespace std;
vector<long long> printfirstnegativeinteger(long long int A[], long long int N, long long int K){
    deque<long long int> dq;
    vector<long long> ans;
    //For the first k element of the arrat
    for(int i = 0; i < K; i++){
        if(A[i] < 0){
            dq.push_back(i);
        }
    }
    //Storing answer of first k size window
    if(dq.size() > 0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    //For all the other window
    for(int i = K; i < N; i++){
        if(!dq.empty() && i-dq.front() >= K){
            dq.pop_front();
        }
        if(A[i] < 0){
            dq.push_back(i);
        }
        if(dq.size() > 0){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}
int main(){
    long long int a[5] = {-8,2,3,-6,10};
    long long int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<long long> ans = printfirstnegativeinteger(a, 5, n);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}