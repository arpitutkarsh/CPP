#include<bits/stdc++.h>
using namespace std;
class Queue{
    //These are the data members of the Class Queue
    int *arr;  
    int ifront;
    int rear;
    int size;
    public:

    Queue(){
        size = 100001;  //Intializing the SIze of the Array
        arr = new int[size];
        ifront = 0;  //Setting front and rear as 0
        rear = 0;
    }

    void enqueue(int data){//To push the data in the Queue
        if(rear == size){ //rear == size means that the Queue is full and no more element can further be pushed in to the Queue
            return ;
        }
        else{//This statement ensures that if the Queue has any empty space left then
            arr[rear] = data; //Giving value to that place of the Array
            rear++; //Incrementing the rear of the array
        }
    }

    int dequeue(){
        if(ifront == rear){//It means that the Queue / Array is empty, and if there is no element in the array / queue then there is nothing to pop
            return -1;
        }
        else{
            int ans = arr[rear]; //Storing the value of arr[rear] to ans
            arr[rear] = -1; //Making arr[rear] as -1
            ifront++; //Incrementing front
            if(ifront == rear){ //It means that suppose if we have popped so many elements of the array / queue that the front now reaches to rear and in that case there is no need to start from that place instead we can start from the index 0
                ifront = 0; 
                rear = 0;
            }
            return ans;
        }
    }

    int isfront(){
        if(ifront == rear){ //It means that the array/queue is empty and there is no front in that array/queue
            return -1;
        }
        else{
            return arr[ifront];
        }
    }

    bool isEmpty(){
        if(ifront == rear){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Queue q;
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
    q.dequeue();
    cout<<"Front of the queue is: "<<q.isfront()<<endl;
    if(q.isEmpty()){
        cout<<"Pagal hai kya!! Queue khaali hai khaali"<<endl;
    }
    else{
        cout<<"OOOOOOH Bhara hua hai"<<endl;
    }
    return 0;
}