#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){ //it means there is a space in the stack
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        //Check whether the stack is empty coz we need atleast one element to implement pop function
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(0);
    st.push(71);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
    /*
    //creating stack
    stack<int> st;
    //push operation
    st.push(4);
    st.push(5);
    st.push(6);
    // pop operation
    st.pop();
    cout<<"P R I N T I N G  T H E  T O P  E L E M E N T : - "<<st.top()<<endl;
    //check if the stack is empty
    if(st.empty()){
        cout<<"Stack is EMPTY"<<endl;
    }
    else{
        cout<<"Stack is NOT EMPTY"<<endl;
    }
    cout<<"Size of stack is: "<<st.size()<<endl;
    */
    return 0;
}