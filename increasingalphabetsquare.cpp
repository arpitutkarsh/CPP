#include<iostream>
using namespace std;
int main(){
    int i =1;
    int n;
    cin>>n;
    char d = 'A';
    while(i<=n){
        int j = 1;
        
        while(j<=n){
            
            
            cout<<d;
            
            j = j+1;
            d = d+1;
            
        }
        cout<<endl;
        
        i = i+1;
    }


    return 0;
}