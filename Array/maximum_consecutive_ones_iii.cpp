#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k){
    //As we have to find the subarray, the first approach that cmes to mind is 2 pointers and sliding window
    //we are looking for zeroes, so we will initialize a variable that will keep the track of zeroes. We will
    //also take two more variables serving as 2 pointers and name it as left and right and both of them will start form index 0

    //As the number of zeroes becomes more than k, we will try to trim of the window by incrementing left variable by 1 place

    int max_length = 0;
    int length = 0;
    int right = 0;
    int left = 0;
    int zeroes = 0;
    while(right < nums.size()){
        if(nums[right] == 0){
            zeroes++;
        }
        while(zeroes > k){
            if(nums[left] == 0){
                zeroes--;
            }
            left++;
        }
        if(zeroes <= k){
            length = right - left + 1;
            max_length = max(max_length, length);
        }
        right++;
    } 
    return max_length;
}

int main(){
    vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;
    cout<<longestOnes(nums, k);
    return 0;
}