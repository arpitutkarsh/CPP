#include<bits/stdc++.h>
using namespace std;
int subarraySumBETTER(vector<int>& nums, int k) {
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        int sum = 0;
        for(int j = i; j < nums.size(); j++){
            sum = sum + nums[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}

int subarraySumOptimized(vector<int>& nums, int k) {
    map<int, int> mpp;
    mpp[0] = 1;
    int preSum = 0, count = 0;
    for(int i = 0; i < nums.size(); i++){
        preSum += nums[i];
        int remove = preSum - k;
        count += mpp[remove];
        mpp[preSum] += 1;
    }
    return count;
}

int main(){
    vector<int> arr = {1,2,3};
    cout<<subarraySumBETTER(arr, 3)<<endl;
    cout<<subarraySumOptimized(arr, 3)<<endl;
    return 0;
}



