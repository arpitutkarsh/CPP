#include<iostream>
using namespace std;
int factorial(int n){
    int counter = 1;
    int i = 1;
    while(i<=n){
        counter = counter * (i);
        i++;
    }
    return counter;
}
int nCr(int n, int r){
    int nume = factorial(n);
    int denom = (factorial(r) * factorial(n-r));
    int numdenom = nume/denom;
    return numdenom;
}
int main(){
    //cout<<factorial(7);
    int a;
    int b;
    cout<<"Enter the first number "<<endl;
    cin>>a;
    cout<<"Enter the second number "<<endl;
    cin>>b;

    cout<<nCr(a,b)<<endl;
}
