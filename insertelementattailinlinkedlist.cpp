#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int input){
        this->data = input;
        this->next = NULL;
    }
};
void InsertatTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp; //Pointing tail to the last node which is temp here
    tail = tail -> next; //now changing the tail to new tail.
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    InsertatTail(tail,11);
    print(head);
    InsertatTail(tail,17);
    print(head);
    InsertatTail(tail,21);
    print(head);
    

    return 0;
}