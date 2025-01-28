#include<bits/stdc++.h>
using namespace std;
class CircularQueue{
    int *arr;
    int ifront;
    int rear;
    int size;
    public:
    CircularQueue(){
        size = 100001;
        arr = new int[size];
        ifront = rear = -1;
    }

    bool enqueue(int data){
        //It means that if the front of the array is 0 that is no element is popped and its rear is in the end which means no space left to push an element
        if((ifront == 0 && rear == (size-1)) || (rear == ((ifront-1)%(size - 1)))){
            return false;
        }
        else if(ifront == -1){//It means that we are pushing the first element
            ifront = rear = 0;
            arr[rear] = data;
        }
        else if(rear = size -1 && ifront != 0){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }

    int dequeue(){
        if(ifront == -1){//Checking if the Queue is empty or not
            return -1;
        }
        //If there is single element in the array/Queue
        int ans = arr[ifront];
        arr[ifront] = -1;
        if(ifront == rear){
            ifront = rear = -1;
        }
        else if(ifront == size-1){//It means that the front is in the last of the array
            ifront = 0;
        }
        else{
            ifront++;
        }
        return ans;
    }
};

int main(){
    CircularQueue q;
    q.enqueue(5);
    q.dequeue();
    q.dequeue();
    return 0;
}