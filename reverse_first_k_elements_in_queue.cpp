#include<bits/stdc++.h>
using namespace std;
queue<int> reversefirstk(queue<int>&q, int k){
    stack<int> s; //Creating an stack, we will use it in reversal of Queue
    //First we will pop first k elements from queue and we will push it in the Queue
    for(int i = 0; i < k; i++){
        int element = q.front(); //We are storing the elements of the queue one by one in the variable called element
        q.pop();
        s.push(element);
    }

    //As the first k element in the queue is now in the stack therefore we will now be pushing that element back to queue
    while(!s.empty()){
        int el = s.top();
        s.pop();
        q.push(el);
    }
    //Suppose the Size of queue is N and we have already pushed k elements from stack to queue, so we have n-k elements in the queue apart from k elements 
    int t = q.size()-k;
    while(t--){
        int elem = q.front();
        q.pop();
        q.push(elem);
    }
    return q;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 2;
    queue<int> qu = reversefirstk(q, 3);
    while(!qu.empty()){
        int element = qu.front();
        
        qu.pop();
        cout<<element<<endl;
    }

    return 0;
}