#include<iostream>
using namespace std;
int main(){
    int n;
    int mask = 0;
    cout<<"Enter the number ";
    cin>>n;
    while(n!=0){
        mask = (mask<<1) | 1;
        n = n>>1;
    }
    int ans = (~n) & mask;
    cout<<ans;
}