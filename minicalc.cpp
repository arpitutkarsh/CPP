#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter the first number "<<endl;
    cin>>a;
    cout<<"Enter the second numbrer "<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operator";
    cin>>op;

    switch(op){
        case '+':cout<<a+b<<endl;
        break;

        case '-': cout<<a-b<<endl;
        break;
        case '%': cout<<a%b<<endl;
        break;
        case '/': cout<<a/b<<endl;
        break;
    }
    cout<<1330/100;
    cout<<1330%100;


    return 0;
}