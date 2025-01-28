#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<" * ";
            j = j+1;
        }
        cout<<endl;
        i= i+1;

    }
cout<<endl;
    //using for loop
    for(int k = 1; k<=n; k++){
        for(int l = 1; l<=n; l++){
            cout<<" * ";
        }
        cout<<endl;
    }



    return 0;
}