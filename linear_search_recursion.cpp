#include<iostream>
using namespace std;
void print(int arr[], int size){
    cout<<"The size of the array is: "<<size<<endl;

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
bool searchArray(int arr[], int size, int key){
    //For easy understanding of what we are doing in the code lets take a void function print which will print all the elements of the array along wiht its size
    print(arr,size);
    //Lets take a base condition which specifies that if size of the array is 0 which means that non-empty array it means that no element is there and no element is there to search for
    if(size == 0){
        return false;
    }
    //Now we atrre moving towards the Recursive formula for this question which is on finding the key and the 0th element of the array equal returtn true else check for the remaining part
    if(arr[0] == key){
        return true;
    }
    else{
        bool ans = searchArray(arr+1,size-1,key);
        return ans;
    }
}
int main(){
    //Here we will be using an array to find a key using linear search
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 5;
    bool answer = searchArray(arr,size,key);
    if(answer){
        cout<<"The element "<<key<<" is present in the array!"<<endl;
    }
    else{
        cout<<"Oops!!, the element "<<key<<" is not present in the array!"<<endl;
    }
    return 0;
}