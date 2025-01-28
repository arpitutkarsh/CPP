#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b = 6;
    int c = 8;
    int d = 2;

    cout<<"And of "<<a<<" and "<<b<<" is "<<(a&b)<<endl;
    cout<<"And of "<<c<<" and "<<d<<" is "<<(c&d)<<endl;
    cout<<"And of "<<a<<" and "<<b<<" is "<<(a&b)<<endl;
    cout<<"Or of "<<a<<" and "<<b<<" is "<<(a|b)<<endl;
    cout<<"Or of "<<c<<" and "<<d<<" is "<<(c|d)<<endl;
    cout<<"XOR of "<<a<<" and "<<b<<" is "<<(a^b)<<endl;
    cout<<"XOR of "<<c<<" and "<<d<<" is "<<(c^d)<<endl;
    cout<<"NOR of "<<a<<" is "<<(~a)<<endl;
    cout<<"NOR of "<<b<<" is "<<(~b)<<endl;
    cout<<"NOR of "<<c<<" is "<<(~c)<<endl;
    cout<<"NOR of "<<d<<" is "<<(~d)<<endl;
    


    


    return 0;
}