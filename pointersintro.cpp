#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int sum = num +1;
    int dum = sum+num+1;
    cout<<"Values of num, sum and dum are :- "<<num<<", "<<sum<<" & "<<dum<<endl;
    cout<<"Address of num, sum and dum are as :- "<<&num<<", "<<&sum<<" &"<<&dum-2<<endl;
    return 0;
}