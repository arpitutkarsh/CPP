#include<bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int> &st, int num){
    //BASE CASE
    if(st.empty() || (!st.empty() && st.top() < num)){
        st.push(num);
        return ;
    }
    int n = st.top();
    st.pop();
    sortedInsert(st, num);
    st.push(n);

}
void sortStack(stack<int>& st){
    //BASE CASE
    if(st.empty()){
        return ;
    }
    int num = st.top();
    st.pop();
    sortStack(st);
    sortedInsert(st, num);
}
int main(){
    stack<int> st;
    st.push(5);
    st.push(-2);
    st.push(9);
    st.push(-7);
    st.push(3);
    sortStack(st);
    cout<<st.top()<<endl;
    return 0;
}


echo "# CPP" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/arpitutkarsh/CPP.git
git push -u origin main