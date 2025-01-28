#include<iostream>
using namespace std;
int tower(int a, int b){ //in first line we are using int as this function will return an integer value
    int ans = 1;
    int n = 1;
    while(n<=b){
        ans = ans*a;
        n++;
    }
    return ans; //here we are returning ans which is a integer value

}
int main(){
    int a;
    int b;
    cin>>a>>b;

    tower(a,b); //to access this power(a,b) we have to create a function called power
    cout<<tower(a,b);
    cout<<tower(3,2);


    return 0;
}