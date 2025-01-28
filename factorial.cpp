#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number ";
    cin>>a;
    int counter = 1;
    int i = 1;

    while(i<a){
        counter = counter*(i+1);
        i++;
        

    }
    cout<<counter;


    return 0;
}