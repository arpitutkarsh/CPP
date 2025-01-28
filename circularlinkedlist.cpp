#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //COnstructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertion(Node* &tail, int element, int data){
    //Assume that the element is in the linked list
    if(tail == NULL){//It means that the given list is empty
        //Create a new node
        Node* newnode = new Node(data);
        tail = newnode;
        newnode->next = newnode;
    }
    else{//Means a non empty list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        //iska mtlb hai ki ab current = element ke equal ho gya hai
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}
void deletei(Node* tail, int value){
    if(tail == NULL){
        cout<<"The list is empty! Kindly check again"<<endl;
        return;

    }
    
    else{
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        //for linked list having only 1 node
        if(curr == prev){
            tail = NULL;
        }

        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        free(curr);
    }
}

int main(){
    Node* tail = NULL;
    //insertion(tail,5,3);
    //print(tail);

    //insertion(tail,5,3);
    //print(tail);
   
   
   
   
   
    deletei(tail,3);
    print(tail);



    return 0;
}