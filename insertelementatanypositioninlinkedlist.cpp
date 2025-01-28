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
void InsertatHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertatTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp; //Pointing tail to the last node which is temp here
    tail = tail -> next; //now changing the tail to new tail.
}
void InsertatPosition(Node* &head,Node* &tail, int position, int data){
    Node* temp = head;
    
    //Insert at Starting
    if(position == 1){
        InsertatHead(head,data);
        return;
    }
    if(temp->next == NULL){
        InsertatTail(tail,data);
        return;
    }
    int current_position = 1;
    while (current_position < position-1) //traversing till we get to the posion less than the required position
    {
        temp = temp->next;
        current_position++;
    }
    //Creating a node for data
    Node* nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;

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
    InsertatPosition(head,tail,1,25);
    print(head);

    cout<<"Head " <<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    

    return 0;
}