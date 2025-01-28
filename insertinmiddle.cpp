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
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    Node* node1 = new Node(5);
    Node* tail = node1;
    InsertatTail(tail, 4);
    InsertatTail(tail, 2);
    print(node1);

    return 0;
}