#include<iostream>
using namespace std;
int main(){
    //Introduction to Pointers--Warning!! Very Scary
    int a = 5; //It creates a block in the memory which has a value equal to 5
    //This maps the a with an address 
    cout<<"Value of a "<<a<<endl;
    //To find the address of a we use & operator example &a
    cout<<"The address of operator a is "<<&a<<endl;
    //The address is always in Hexadecimal Format
    //Pointer is used to store the Address
    //Pointer is created by int *ptr = &a;
    int *ptr = &a;
    cout<<"Printing address using pointer "<<ptr<<endl;
    //Incrementing the value of a using Pointers
    (*ptr)++;
    cout<<"Now the value of a is "<<a<<endl;
    //int *ptr =&a means that ptr is a pointer to int data type
    char ch = 'a';
    cout<<"The value of ch is "<<ch<<endl;
    //Creating pointer for ch is 
    char *chr = &ch;
    //First printing out address of a with &a
    cout<<"Address of ch using & is "<<&ch<<endl;
    //Printing out address of ch using pointer
    cout<<"Address of ch using pointer is "<<chr<<endl;
    (*chr)++;
    cout<<ch<<endl;
    string s = "ABCDE";
    cout<<"The value of string s is : "<<s<<endl;
    string *adstr = &s;
    cout<<"Printing string using Pointer "<<*adstr<<endl;
    cout<<"Printing address using & "<<&s<<endl;
    cout<<"Printing address using Pointer "<<adstr<<endl;
    cout<<"-------Printing size of each value---------------"<<endl;
    cout<<"Size of a ie integer: "<<sizeof(a)<<endl;
    cout<<"Size of ptr ie integer pointer: "<<sizeof(ptr)<<endl;
    cout<<"Size of ch ie character: "<<sizeof(ch)<<endl;
    cout<<"Size of pointer chr ie character: "<<sizeof(chr)<<endl;
    cout<<"Size of s ie string: "<<sizeof(s)<<endl;
    cout<<"Size of adstr ie string pointer: "<<sizeof(adstr)<<endl;
    cout<<"______________________________________________________________________________________________________________________________________"<<endl;
    int l = 100;
    int *def = 0;
    def = &l;
    cout<<"Address of L is:"<<def<<endl;
    cout<<"______________________________________________________________________________________________________________________________________"<<endl;
    cout<<"Copying a Pointer"<<endl;
    int *ghi = def;
    cout<<"Printing the value of def "<<def<<endl;
    cout<<"Printing the value of ghi "<<ghi<<endl;
    cout<<"Star of ghi and def "<<*ghi<<"+"<<*def<<endl;
    ghi = ghi+1;
    cout<<"Does adding +1 to ghi increases its address? "<<ghi<<endl;
    cout<<"Printing the value of def "<<def<<endl;
    cout<<"Printing the value of ghi "<<ghi<<endl;






    return 0;
}