#include<iostream>
using namespace std;
int sqrt(int n){
    int low = 0;
    int high = n/2;
    if(n == 1){
        return 1;
    }
    while(low <= high){
        int mid = low + (high-low)/2;
        int sqr = mid*mid;
        if(sqr == n){
            return mid;
        }
        else if(sqr > n){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return high;
}
int main(){
    int n = 2;
    cout<<sqrt(n);
    return 0;

}