#include<iostream>
using namespace std;
int balance = 2000; //declaring global variable
//Use of GLOBAL VARIABLE is a BAD_PRACTIVE
/*
Disdavantages are
1. Any function can change its value and after the value is changed any function using the global variable will give wrong result means that change will reflect everywhere that global variable is used

*/
int main(){
    cout<<"Your balance is: "<<balance<<endl;
    balance = balance + 100.5;
    {
        cout<<"bal is: "<<balance<<endl;
        balance = balance + 9999;
    }
    cout<<"bal: "<<balance;
    return 0;
}