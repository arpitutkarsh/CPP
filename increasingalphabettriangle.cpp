#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = 'A';
    int i = 1;
    while(i<=n){
        int j =1;
        
        while(j<=i){
            cout<<ch;
            
            j = j+1;
            ch= ch+1;
        }
        cout<<endl;
        i = i+1;

    }
    return 0;
}