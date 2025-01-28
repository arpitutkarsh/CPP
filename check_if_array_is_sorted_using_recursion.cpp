#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
    //spcifying the base case that is if size of array is 0 there is no any element hence no need to sort or the array is already sorted
    //There will be one more base case that is if the size of the array is 1, it means that we already have one element and we also dont need to 
    //sort that one element which means that the array is already sorted
    //Therefore base case
    if(size == 0 || size == 1){
        return true;
    }
    //Now we are heading towards the recursive formula
    if(arr[0] > arr[1]){
        return false;    //in this line if the 0th index element is greater than the first index element it means that the arrray is not sorted 
        //it will return false
    }
    else{
        bool ans = isSorted(arr+1,size-1);//this is the recursive formula in which we are paasing the value of all the elements of the array which 
        //is not checked in the line number 12 and 13
        return ans;
    }
    //now returning the ans

}
int main(){
    int arr[6] = {2,4,12,8,10,15};
    int size = 6;
    int ard[4] = {5,2,3,6} ;

    bool ans = isSorted(arr, size);
    if(ans){
        cout<<"The given array is sorted "<<endl;
    }
    else{
        cout<<"OOPS! the given array is  unsorted"<<endl;
    }
    cout<<isSorted(ard,4);



    return 0;
}