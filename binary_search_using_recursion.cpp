#include<iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int key){
    //First we will find the mid 
    int mid = start + (end - start)/2;
    //Now moving towards the base case which is that if the start is greater than end return false
    if(start > end){
        return false;
    }
    //There will be one more base case that if the element is found return true;
    if(arr[mid] == key){
        return true;
    }
    //Now we are moving towards the Recursive relation for this function
    if(arr[mid] > key){
        return binarySearch(arr,start,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,end,key);
    }


}
int main(){
    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int key = 10;

    bool answer = binarySearch(arr,0,5,key);
    if(answer){
        cout<<"Yay!! Element found using Binary Search "<<endl;
    }
    else{
        cout<<"OOPS!! Element does not found"<<endl;
    }


    return 0;
}