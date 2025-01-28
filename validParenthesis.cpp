#include<bits/stdc++.h>
using namespace std;
bool isValid(string str){
    stack<char> s;
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        //If the character encounters opening bracket push in the stack
        //If the character encounters closing bracket, check top of the stack and then pop
        if(ch == '(' || ch == '{' || ch == '['){ //for opening bracket
            s.push(ch);
        }
        else{
            //Check if the stack is not empty
            if(!s.empty()){
                char top = s.top();
                if((ch == ')' && top == '(') || 
                (ch == ']' && top == '[') || 
                (ch == '}' && top == '{')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string str = "(]";
    if(isValid(str)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"Fake";
    }
    return 0;
}