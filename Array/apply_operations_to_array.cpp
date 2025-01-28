#include<bits/stdc++.h>
using namespace std;
void apply_operations(vector<int>& nums){
    //int i = 0;
    for(int i = 0; i < nums.size()-1; i++){
        if(nums[i] != nums[i+1]){
            continue;
        }
        else{
            nums[i] = 2 * nums[i];
            nums[i+1] = 0;
        }
    }

    int k = 0;
    for(int j = 0; j < nums.size(); j++){
        if(nums[j] != 0){
            swap(nums[k], nums[j]);
            k++;
        }
    }
}
int main(){
    vector<int> arr = {1,2,2,1,1,0};
    apply_operations(arr);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}