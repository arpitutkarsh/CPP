#include<iostream>
using namespace std;
int factorial_using_recursion(int n){
    //First we will Specify base condition. For factorial base condition is n == 1
    if(n == 0){
        return 1;
    }
    //Then give the recursive formula
    int recursive_formula = factorial_using_recursion(n-1);
    int ans = n * recursive_formula;
    return ans;
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Factorial is: "<<factorial_using_recursion(a)<<endl;
    return 0;
}