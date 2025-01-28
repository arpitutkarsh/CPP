#include<iostream>
using namespace std;
int numberofbit(int a, int b){
    int counter = 0;
    while(a!=0){
        int bit = a&1;
        if(bit == 1){
            counter = counter +1;
            
        }
        a = a>>1;
    }
    while(b!=0){
        int bits = b&1;
        if(bits==1){
            counter = counter+1;
        }
        b = b>>1;
    }
    return counter;

}

int main(){
    cout<<numberofbit(2,3);

    return 0;
}