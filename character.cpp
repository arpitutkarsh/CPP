#include<iostream>
using namespace std;
int main(){
    char p;
    cin>>p;

    if(p>='A' && p<='Z'){
        cout<<"Uppercase";
    }
    else if (p>='a' && p<='z')
    {
        cout<<"Lowercase";
    }
    else
    {
        cout<<"Numeric";
    }
    
    
    return 0;
    

    
}
