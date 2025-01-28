#include<iostream>
#include<queue>
using namespace std;
int main(){
    //Create Queue using STL
    queue<int> q;
    //To insert element in the queue we use push operation
    q.push(11);
    q.push(15);
    q.push(13);

    //To print the size of queue 
    cout<<"Size of Queue is: "<<q.size()<<endl;
    q.pop();
    cout<<"Size of Queue is: "<<q.size()<<endl;
    //To find the front of Queue
    cout<<"Front of Queue is "<<q.front()<<endl;
    if(q.empty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is NOt empty"<<endl;
    }
    return 0;
}