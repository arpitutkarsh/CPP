#include<bits/stdc++.h>
#include<stack>
using namespace std;
queue<int> simple_reverse(queue<int> q){
    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int el = s.top();
        s.pop();
        q.push(el);
    }
    return q;
}

void reversei(queue<int> q){
    if(q.empty()){
        return ;
    }
    int ans = q.front();
    q.pop();
    reversei(q);
    q.push(ans);
}

queue<int> revi(queue<int> q){
    reversei(q);
    return q;
}
int main(){
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);
    
    queue<int> qu = simple_reverse(q);
    while(!qu.empty()){
        int element = qu.front();
        qu.pop();
        cout<<element<<endl;
    }

    cout<<endl;
    
    queue<int> que = revi(q);
    while(!que.empty()){
        int ele = que.front();
        que.pop();
        cout<<ele<<endl;
    }
}