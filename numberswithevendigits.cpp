#include<iostream>
using namespace std;
int Digit(int n){
    int counter = 0;
    while(n!=0){
        n = n/10;
        counter++;
    }
    return counter;
}
int main(){
    long int n = 1554300;
    cout<<Digit(n)<<endl;
    int arr[4] = {555,901,482,1771};
    int counter = 0;
    for(int i = 0; i<4; i++){
        if((Digit(arr[i]))%2 == 0){
            cout<<arr[i]<<" is array"<<endl;
            counter++;
        }
    }
    cout<<counter;
    return 0;
}