#include<bits/stdc++.h>
using namespace std;

int checkRedundancy(string &str){
    stack<char> st;
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*'){
            st.push(ch);
        }
        else{
            if(ch == ')'){
                bool isRedundant = true;
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '/' || top == '*'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant == true){
                    return 1;
                }
                st.pop();
            }
        }
    }
    return 0;
}
int main(){
    string str = "(a+b)";
    if(checkRedundancy(str)){
        cout<<"Red";
    }
    else{
        cout<<"bhag";
    }
    return 0;
}
