#include<iostream>
using namespace std;
int main(){
    int arr[5] = {4,3,1,5,6};
    int i = 0;

    while(i < 5){
        int j = i+1;
        cout<<"Ye i ka value hai: "<<arr[i]<<"."<<i<<endl;
        while(j < 5){
            
            cout<<"Ye j ka value hai: "<<arr[j]<<"."<<j<<endl;
            j++;
        }
        i++;
    }

    return 0;
}