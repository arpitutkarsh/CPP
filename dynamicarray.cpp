#include<iostream>
using namespace std;
int main(){
    /*
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int* arr = new int[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }            
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }   
    */
    //Creating dynamic 2D Array
    /*
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int** arr = new int* [n];
    for(int i = 0; i<n; i++){
        arr[i] = new int[n];
    }
    //Array created
    //Now taking Input
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    //Printing the array
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    */
    //DYnamic Array for different row and different column
    int i;
    cout<<"Enter the number of rows: ";
    cin>>i;
    int j;
    cout<<"Enter the nymber of columns: ";
    cin>>j;
    int ** sarr = new int* [i];
    for(int j = 0; j<i; j++){
        sarr[j] = new int[j];
    }
    for(int k = 0; k<i; k++){
        for(int d = 0; d<j; d++){
            cin>>sarr[k][d];
        }
    }
    for(int k = 0; k<i; k++){
        for(int d = 0; d<j; d++){
            cout<<sarr[k][d]<<" ";
        }
        cout<<endl;
    }
    return 0;
}