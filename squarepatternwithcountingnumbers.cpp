#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int i = 1;
    int k = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<" "<<k<<" ";
            k= k+1;
            j = j+1;

        }
        cout<<endl;
        i = i+1;
    }
    cout<<endl;
    int r = 1;
    for (int l = 1; l <= n; l++){
        for(int t = 1; t<=n; t++){
            cout<<r<<" ";
            r = r+1;
        }
        cout<<endl;
    }
    

    return 0;
}