#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n, int key){
    for(int i = 1 ; i< n ; i++){
        if(arr[i] == key){
            return 1;
        }
        
        
        
    }
    return 0;
}
int main(){
    
    int arr[5] = {-2,11,7,3,10}; 
    int key;
    cout<<"Enter the element to search for "<<endl;
    cin>>key;

    bool found = linearSearch(arr,5,key);
    if(found){
        cout<<"The key is present";
    }
    else{
        cout<<"not";
    }

    

    return 0;
}