#include<iostream>
using namespace std;
int main(){
    int cel;
    cout<<"Enter the degree in Celsius "<<endl;
    cin>>cel;
    int f = 0;;
    int i = 0;
    while(i<= cel){
        f = (i*1.8) + 32;
        cout<<"For "<<i<<" the Fehrenheit is "<<f<<endl;
        i = i+5;
    }


    return 0;
}