#include<iostream>
using namespace std;
int main(){
    int n =4;
    int m = 2;
    int a[n] = {1,2,2,1};
    int b[m] = {2,2};
    int k = 0;
    int an[k];
    for(int i =0;i<4;i++){
        for(int j=0;j<2;j++){
            if(a[i] == b[j]){
                an[k] == an[i];
                k = k+1;
                b[j] = -100;
                break;


            }
        }
    }
    cout<<an[0]<<endl;
    cout<<an[1];
    
}