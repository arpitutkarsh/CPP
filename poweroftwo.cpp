#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n = 33;
    int x = 1;
    
    while(x<n){
        int y = (pow(2,x));
        int z = n % y;
        
        if(z==0){
            return true;
            break;
        }
        else{
            return false;
            break;
        }

        x++;

        
        
        

        
    }
    bool a;
    a = 1;
    return a;

}
