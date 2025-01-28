#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int sum = 0;
    int i = 1;

    while(i <= n){
        sum = sum + i;
        i = i+1;
    }
    cout<<sum<<" is the sum"<<endl;

    return 0;
}