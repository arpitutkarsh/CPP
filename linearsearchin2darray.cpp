#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
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
    cout<<"Enter the element to find ";
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4)){
        cout<<"Yes it is Present";
    }
    else{
        cout<<"No! it is not present ";
    }

    return 0;
}