#include<iostream>
using namespace std;
#include<math.h>
int main(){
    //int n;
    //cout<<"Enter the number in the binary format"<<endl;
    int n;
    cin>>n;
    float ans = 0;
    int i =0;
    //cout<<~n;
    while(n!=0){
        //int bit = n%10;
        int bit = n & 1;
        ans = (bit*pow(10,i)) + ans;

        //if(bit == 1){
            //ans = (bit*pow(2,i));

        //}
        
        n = n>>1;
        i++;

    }
    cout<<ans<<endl;
    //int ans = ~ ans;
    //cout<<ans;
    //int add = ans+1;
    //cout<<add<<endl;
    //int a = 2;
    //a = a<<1;
    //cout<<a;
    //int a = ans;
    //a = ~ a;
    //cout<<a;



    return 0;
}