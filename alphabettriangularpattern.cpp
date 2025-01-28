#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int j = 1;
        char ch = 'A';
        while(j<=i){
            
            char d = 'A'+i-1;
            cout<<d;
            
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    return 0;
}