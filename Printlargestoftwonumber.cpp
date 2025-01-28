#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter any two number"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<"The largest number is "<<a<<endl;
    }
    if(b>a){
        cout<<"The largest number is "<<b<<endl;
    }
    else{
        cout<<"Both the numbers are equal"<<endl;
    }



    return 0;
}