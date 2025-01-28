#include<iostream>
using namespace std;
int fib(int n){
    //Base Case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    //Recursive function
    int bp = fib(n-1) + fib(n-2);
    return bp;
}
int forfib(int n){
    int start = 0;
    int next = 1;
    int ans;
    for(int i = 1; i<n; i++){
        ans = start + next;
        start = next;
        next = ans;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    cout<<forfib(n);
    return 0;
}