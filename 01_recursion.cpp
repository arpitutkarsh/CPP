#include<iostream>
using namespace std;

void function(){
    cout<<1<<" ";
    function();
}

int main(){
    function(); //this function prints an infinite looop
    return 0;
}