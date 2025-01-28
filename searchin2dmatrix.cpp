#include<iostream>
using namespace std;
bool binarysearchin2d(int matrix[][4],int row,int column,int target){
    int start = 0;
    int end = row*column-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        int element = matrix[mid/column][mid%column];
        if(element == target){
            return 1;
        }
        else if(element < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return 0;
}
int main(){
    int matrix[3][4];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin>>matrix[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<binarysearchin2d(matrix,3,4,7);
}