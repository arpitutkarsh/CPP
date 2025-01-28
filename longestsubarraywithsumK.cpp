#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,1,1,1,1,4,3};
    int n = arr.size();
    int k = 6;
    map<int, int> presum;
    int sum = 0;
    int len = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        if(sum == k){
            len = max(len, i+1);
        }
        int remaining = sum - k;
        if(presum.find(remaining) != presum.end()){
            int leng = i - presum[remaining];
            len = max(len,leng);
        }
        if(presum.find(remaining) == presum.end()){
            presum[sum] = i;
        }
    }
    for(auto it: presum){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<len<<endl;
    return 0;
}