#include<iostream>
using namespace std;
int sqrt(int x){
    int start = 0;
    int end = x;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        int sqr = mid*mid;
        if(sqr == x){
            return mid;
        }
        if(sqr < x){
            ans = mid;
            start = mid+1;

        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    cout<<sqrt(9);

    return 0;
}