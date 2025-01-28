#include<iostream>
using namespace std;
int maxArea(int arr[], int n){
    int left = 0;
    int right = n-1;
    int Area = 0;
    while(left<right){
        int currentArea = min(arr[left], arr[right])*(right-left);
        Area = max(currentArea,Area);
        if(arr[left] < arr[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return Area;
}
int main(){
/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.
*/
    int height[2] = {1,1};
    cout<<maxArea(height,2)<<endl;

   
    return 0;
}