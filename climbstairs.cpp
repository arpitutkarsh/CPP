/*You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
*/
#include<iostream>
using namespace std;
int climb(int n){
    //Base Case - 1
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    int ans = climb(n-1) + climb(n-2);
    return ans; 
}
int main(){
    int n;
    cout<<"Enter the nth stair: ";
    cin>>n;
    cout<<climb(n);


    return 0;
}