#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& st, int x){
    //Base case - It means that we have to insert th eleement at the bottom of the stack means at the point when it is empty therefore we are checking if the stack is empty or not 
    if(st.empty()){
        st.push(x);
    }
    int num = st.top();
    st.pop();

    //recursive call
    solve(st, x);
    st.push(num);
}
stack<int> pushatBottom(stack<int>& st, int x){
    solve(st, x);
    return st;
}
int main(){
    stack<int> st;
    st.push(7);
    st.push(1);
    st.push(4);
    st.push(5);
    pushatBottom(st, 9);
    cout<<st.top();
    return 0;
}