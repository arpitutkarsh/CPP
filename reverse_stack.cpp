#include<bits/stdc++.h>
using namespace std;
void insertatBottom(stack<int>& st, int x){
    //BASE CASE
    if(st.empty()){
        st.push(x);
        return ;
    }
    int num = st.top();
    st.pop();
    insertatBottom(st, x);
    st.push(num);
}
void reverseStack(stack<int>& st){
    //Base Case
    if(st.empty()){
        return ;
    }
    int num = st.top();
    st.pop();
    reverseStack(st);
    insertatBottom(st, num);
}
int main(){
    stack<int> st;
    st.push(7);
    st.push(4);
    st.push(3);
    st.push(9);

    reverseStack(st);
    cout<<st.top();
}