#include<iostream>
using namespace std;
int main(){
    int arr[4] = {4,3,2,6};
    int sarr[4];
    int max = INT32_MIN;
    //0th rotation
    for(int rotate = 0; rotate<4; rotate++){
        for(int i = 0; i<4; i++){
            sarr[(i+rotate)%4] = arr[i];
        }
        //yaha se glt ho skta hai shayad
        int sum = 0;
        for(int k = 0; k<4; k++){
            sum = sum+ k*sarr[k];
        }
        if(sum>max){
            max = sum;
        }
        

    }
    cout<<max;
    int32_t m = 36;
    cout<<m;

    return 0;
}