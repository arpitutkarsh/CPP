#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    int sarr[3][4] = {{1,12,13,14},{2,23,24,25},{3,34,35,36}};
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4;j++){
            cout<<sarr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;  
    }

    



    return 0;
}