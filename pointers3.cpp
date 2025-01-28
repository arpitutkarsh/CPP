#include<iostream>
using namespace std;
int main(){
    //Only for character array
    int arr[5] = {1,4,7,3,6};
    char ch[6] = "abcde";
    //Can we find address of character array just by using its name? No bcz cout function for integer array and char array is differently implemented
    cout<<arr<<" is the address of array."<<endl;
    cout<<ch<<" is not the address"<<endl;

    char *p = &ch[0];
    cout<<"Does doing above prints the address? No "<<p<<endl;
    return 0;
}