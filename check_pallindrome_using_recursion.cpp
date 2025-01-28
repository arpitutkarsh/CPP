#include<iostream>
using namespace std;
bool isPallindrome(string str, int start, int end){
    //Base Conditiob
    //Here the base condition will be if starting index is greater than the ending index return true because if it reaches upto that point it means that the string is Pallindrome
    if(start > end){
        return true;
    }
    if(str[start] != str[end]){
        return false;
    }
    else{
        return isPallindrome(str, start+1, end-1);
    }
}
int main(){
    string str = "aabbccddddccbbaa";
    bool checkPallindrome = isPallindrome(str, 0, str.length() - 1);
    if(checkPallindrome){
        cout<<"The given string is Pallindrome";
    }
    else{
        cout<<"The given string is not a Pallindrome";
    }


    return 0;

}