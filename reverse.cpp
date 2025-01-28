#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit;
    int newnum;
    int rev = 0;
    
    


    while(n!=0){
        digit = n%10;
        //newnum = (digit*10);
        //rev = newnum+digit;
        rev = (rev*10)+digit;
        
        n = n/10;
        //cout<<newnum<<endl;;
        //cout<<rev<<endl;

        
        
        
        

    }
    cout<<rev;
    

    //int ans = (n*10)+digit;
    

    
    


    return 0;
}