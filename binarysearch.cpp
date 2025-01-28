#include<iostream>
using namespace std;
int binarysearch(int array[],int n, int key){
    int start = 0;
    int end = n-1;
    //int mid = (start+end)/2;
    int mid = start + ((end-start)/2);
    //Suppose if the integer starts at 2^31 - 1 and ends at 2^31 - 1, the range of integer is from 0 to 2^31 - 1 so if we add tart and end we will get a value that is larger than the value of integer so instead of writing (Start + end) / 2 we can also write start + {(end - start)/2} 
    while(start<=end){
        if(array[mid] == key){
            return mid;
        }
        if(key > array[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        //mid = (start+end)/2;
        mid = start + ((end-start)/2);
    }
    return -1;
}
int main(){
    int even[6] = {11,47,61,71,93,96};
    int odd[7] = {7,31,39,48,71,103,180};
    int keyeven = 93;
    int keyodd = 180;

    int index = binarysearch(even,6,keyeven);
    cout<<"The element "<<keyeven<<" is present at the position "<<index<<endl;
    int jindex = binarysearch(odd,7,keyodd);
    cout<<"The element "<<keyodd<<" is present at the position "<<jindex<<endl;

    return 0;
}