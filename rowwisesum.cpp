#include<iostream>
using namespace std;
void Printsum(int arr[][4], int row, int col){
    for(int i = 0; i <row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][4];
    for(int x = 0; x<3; x++){
        for(int y = 0; y<4; y++){
            cin>>arr[x][y];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    Printsum(arr,3,4);

    return 0;
}