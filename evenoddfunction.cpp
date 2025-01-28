#include<iostream>
using namespace std;
bool isevod(int a){
    if(a%2 == 0){
        return 1;
    }
    return 0;

}
int main(){
    int a;
    cin>>a;
    if(isevod(a)){
        cout<<"Even";
    }
    else{
        cout<<"odd";
    }
    



    return 0;
}