#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<" * ";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    cout<<endl;
    for(int k = 1; k<=n; k++){
        for(int l = 1; l<=k; l++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}