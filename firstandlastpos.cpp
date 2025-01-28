#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,1,2,2,2,2,3};
    int x = 2;
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int firstpos = -1;
    int secpos = -1;
    /*
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == x){
            firstpos = mid;
            end = mid - 1;
        }
        else if(arr[mid] > x){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    */
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == x){
            secpos = mid;
            start = mid + 1;
        }
        else if(arr[mid] < x){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    cout<<firstpos<<endl;
    cout<<secpos<<endl;
    return 0;
}