#include<iostream>
using namespace std;
/*
It is very very BAD PRACTICE NEVER DO THIS. It is bad practive because num and ans in the function is a local variable and as the block ends the memory will be cleared
Will receive warning as 'num' was not declared in this scope 
//Creating a function of type int&
int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}
*/
//Creating two functions named update 1 and update 2
void update1(int n){//In this function we have passed directly the value of n 
    n++;
}
void update2(int& j){//In this function we have passed the value of reference variable
    j++;
}
int main(){
    /*
    int i = 5;
    //Creating a Reference Variable
    int& j = i; //It is a reference variable which is created by int& j = i;
    cout<<"Printing the value of i: "<<i<<endl;
    i++;
    cout<<"Printing again the value of incremented by i: "<<i<<endl;
    j++;
    cout<<"Printing the value of i by incrementing j: "<<i<<endl;
    cout<<"Value of j is: "<<j<<endl;
    cout<<"Printing the value of i: "<<i<<endl;
    */
    //Demonstrating use of Reference variable using function.
    //Creating new integer n whose value will be 5

    int n = 6;
    cout<<"Printing the value of n, which is: "<<n<<endl;
    cout<<"Using update 1 function"<<endl;
    update1(n);
    cout<<"Printing the vallue of n after update1: "<<n<<endl;
    cout<<"Using update 2 function"<<endl;
    update2(n);
    cout<<"Printing the value of n after update 2 function: "<<n<<endl;
    // Very bad Practice cout<<func(num)<<endl;//
    return 0;
}