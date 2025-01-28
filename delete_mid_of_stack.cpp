#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& inputstack, int count, int size){
    //BASE CASE
    if(count == size/2){
        inputstack.pop();
        return ;
    }
    int num = inputstack.top();
    inputstack.pop();
    //recursive call
    solve(inputstack,count+1, size);
    inputstack.push(num);
}
void deleteMiddle(stack<int>& inputstack, int N){
    int count = 0;
    solve(inputstack, count, N);
}

int main(){
    stack<int> st;

    st.push(5);
    st.push(9);
    st.push(12);
    st.push(8);
    st.push(4);
    deleteMiddle(st, st.size());
    cout<<st.top();
    st.pop();
    cout<<st.top();
    st.pop();
    cout<<st.top();
    st.pop();
    cout<<st.top();
    st.pop();
    cout<<st.top();


}