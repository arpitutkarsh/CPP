#include<iostream>
using namespace std;
int main(){
    int arr[6] ={1,2,2,3,3,3};
    for(int i=0; i<6; i++){
        int counter = 0;
        
        for(int j = i ; j<6; j++){
            int ans = arr[i];
            if(ans^arr[j] == 0 ){
                counter++;
            }
            cout<<ans;
        }
        cout<<arr[i]<<counter<<endl;
        counter = 0;
    }


    return 0;
}