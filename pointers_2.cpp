#include<iostream>
using namespace std;
int main(){
    //to find the address of first memory block we use arr
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    cout<<"Address of first block or element of the array ca be found by printing the name of the array "<<arr<<endl;
    //Address of  blcok of the memory can also be found using & operator with the location of that block
    cout<<"Address of  blcok of the memory can also be found using & operator with the location of that block "<<&arr[0]<<endl;
    cout<<"Address of the second block of memory in the array "<<&arr[1]<<endl;
    cout<<"Address of the third block of memory in the array "<<&arr[2]<<endl;
    //The address of each block increases by 4 incase of an integer
    cout<<"Size of array is "<<sizeof(arr)<<endl;
    //Printing value at 0 index using pointer
    cout<<"Value at 0 index: "<<*arr<<endl;
    cout<<"One more way to print array is ---"<<endl;
    cout<<8[arr]<<endl;
    //Printing size of array and Pointers
    cout<<"Size of array is "<<sizeof(arr)<<endl;
    int *p = &arr[0];
    cout<<"Size of Pointer is "<<sizeof(p)<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
    int ary[5] = {1,2,3,4,5};
    cout<<"Address of arrays first element = "<<&ary[0]<<endl;
    cout<<"Address of arrays first element by other method = "<<&ary<<endl;
    cout<<"Address "<<ary<<endl;
    int *z = &ary[0];
    cout<<"Printing *z: "<<*z<<endl;
    cout<<"Printing z only : "<<z<<endl;
    cout<<"Printing &z: "<<&z<<endl;

    return 0;
}