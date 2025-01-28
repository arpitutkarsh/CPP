#include<iostream>
using namespace std;
int main(){
    uint32_t n;
    cin>>n;
    int counter = 0;
    while(n!=0){
        int bit = n & 1;
        if(bit==1){
            counter = counter +1;
        }
        n = n>>1;
    }
    cout<<counter;
}