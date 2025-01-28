#include<iostream>
using namespace std;
int main(){
    int i = 5;
    for(int j = 0; j<=5; j++){
        for(int k = 0; k<=5; k++){
            j = j*(j-1);
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}