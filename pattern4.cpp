// 1 2 3 4
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<" "<<j<<" ";
            j = j+1;
        }
        cout<<endl;
        i=i+1;
    }
    for(int k =1; k<=n; k++){
        for(int l=1; l<=n; l++){
            cout<<l;
        }
        cout<<endl;
    }

    
    int s = 1;
    while(s<=n){
        int p=1;
        while(p<=n){
            cout<<n-p+1;
            p = p+1;
        }
        cout<<endl;
        s = s+1;
    }
    
    return 0;
}