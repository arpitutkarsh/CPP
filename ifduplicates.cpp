#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,1};
    int i = 0;
    while(i<5){
        cout<<"The value of i and its element is "<<i<<arr[i];
        int ans = arr[i];
        int j = i+1;
        while(j<5){
            if(ans^arr[j]==0){
                cout<<"FOund"<<endl;
                break;
            }
            j++;
        }
        i++;
    }
    return 0;
}