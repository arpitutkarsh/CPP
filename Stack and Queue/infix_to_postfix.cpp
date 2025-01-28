#include<iostream>
#include<stack>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int priority(char s){
    if(s == '^'){
        return 3;
    }
    else if(s == '*' || s == '/'){
        return 2;
    }
    else if(s == '+' || s == '-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixtoPostfix(string s){
    int n = s.length();
    stack<char> st;
    string ans;
    for(int i = 0; i < n; i++){
        char c = s[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            ans += c;
        }
        else if(c == '('){
            st.push('(');
        }
        else if(c == ')'){
            while(st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && priority(s[i]) <= priority(st.top())){
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main(){
    string s = "a+b*(c^d-e)";
    string a = infixtoPostfix(s);
    cout<<a<<endl;
    return 0;
}