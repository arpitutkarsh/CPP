#include<iostream>
using namespace std;
void sum(int i, int sumi){
    if(i < 1){
        cout<<sumi<<endl;
        return ;
    }
    sum(i-1, sumi +i);
}
int main(){
    int n;
    cin >> n;
    sum(n, 0);
    return 0;
}