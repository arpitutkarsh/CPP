#include<iostream>
using namespace std;
void count(int n){
    //Base Condition
    if(n == 0){
        return ;
    }
    cout<<n<<endl;
    //Recursive Relation
    count(n-1);
}
int main(){
    int n;
    cout<<"Enter the number to start counting from: ";
    cin>>n;
    count(n);
    return 0;
}