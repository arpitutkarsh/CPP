#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;

    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<n<<" is not prime "<<endl;
            break;
        }
        else{
            cout<<n<<" is prime "<<endl;
            break;
        }
        
    }
    cout<<3.0/2<<endl;

    return 0;
}