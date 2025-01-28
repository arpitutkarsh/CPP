#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> ans;
    for(int i = 0; i< nums.size(); i++){
        int num = abs(nums[i]);
        //cout<<num<<endl;
        if(nums[num-1] < 0){
            cout<<nums[num-1]<<endl;
            ans.push_back(num);
            nums[num-1] *= -1;
            cout<<ans<<endl;
        }
    }
    return 0;
}