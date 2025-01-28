#include<iostream>
using namespace std;
int power(int n){
    //Base Case--Writing base case first
    if(n==0){
        return 1;
    }
    //Recursive Relation
    int first = power(n-1);
    int second_problem = 2 * first;

    return second_problem;
}
int main(){
    int n;
    cout<<"Enter the Power of 2: ";
    cin>>n;
    int ans = power(n);
    cout<<ans;

    return 0;
}