#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    int n = 1;
    int ans = 1;
    while(n<=b){
        ans = ans*a;
        n++;

    }
    cout<<ans;


    return 0;
}