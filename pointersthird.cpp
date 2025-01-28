#include<iostream>
using namespace std;
int main(){
    int i = 75;
    int * ptr = &i;
    //Double Pointer
    int ** ptr2 = &ptr; ///This is double pointer
    cout<<"--------------------------------------------------"<<endl;
    cout<<"---------------------------Accessing the value of i--------------------"<<endl;
    cout<<"The value stored in i is: "<<i<<endl;
    cout<<"---------------------------Accessing the address of i without using pointers------------------------"<<endl;
    cout<<"The address of i is: "<<&i<<endl;
    cout<<"---------------------------Accessing the value stored in pointer------------------------------------"<<endl;
    cout<<"Value(Address of i)stored in Pointer is: "<<ptr<<endl;
    cout<<"----------------------------Accessing the value of i using pointer---------------------------------"<<endl;
    cout<<"Value of i using pointer is: "<<*ptr<<endl;
    cout<<"----------------------------Accessing address of ptr using &----------------------------------------"<<endl;
    cout<<"Address of ptr is: "<<&ptr<<endl;
    cout<<"----------------------------Accessing the value strored in double pointer---------------------------"<<endl;
    cout<<"Value stored in Double Pointer is: "<<ptr2<<endl;
    cout<<"-----------------------------Accessing the value of element stored in ptr---------------------------"<<endl;
    cout<<"Value of ptr using *ptr is: "<<*ptr2<<endl;






    return 0;
}