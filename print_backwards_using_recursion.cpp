#include<iostream>
using namespace std;
void printbackwards(int n){
    if(n < 1){
        return ;
    }

    cout<<n<<endl;
    printbackwards(n-1);
}
int main(){
    int n;
    cin >> n;
    printbackwards(n);
    return 0;
}