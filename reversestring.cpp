#include<iostream>
using namespace std;
string reverse(string s){
    int start = 0;
    int end = s.length() - 1;
    string ans = "";
    string temp = "";
    for(int i = 0; i < end;){
        if(s[i] == ' '){
            i++;
        }
        else{
            temp = temp + s[i];
            i++;

        }
    }
    return temp;
}
int main(){
    string s = "My name is";
    cout<<reverse(s);
}