#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){

    string s = "*";
    
    stack<char> st;
    cout<<st.top()<<endl;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '*'){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return -1;
            }
            else{
                st.pop();
            }
        }
    }

    cout<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}