#include<iostream>
using namespace std;
bool pallindrome(int i, string s, int n){
    if(i >= n/2){
        return true;
    }
    if(s[i] != s[n-i-1]){
        return false;
    }
    return pallindrome(i+1, s, n);
}
int main(){
    string s = "madami";
    if(pallindrome(0, s, 6)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False";
    }
    
    return 0;
}