#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //Creating constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int getLength(Node* head){
    Node* temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}
void InsertatHead(Node* &head, int data){
    Node* temp = new Node(data);  //creating a new node which we want to add at head
    temp->next = head; //as the new node will be head so its next pointer will be pointing to the previous head of the linked list
    head->prev = temp; //as earlier the previous pointer of the head node was NULL and we are adding a new node so it should be pointing to that only, therefore we are doing that in this line of code
    head = temp; //updating the previous head as temp
}

void InsertatTail(Node* tail, int data){
    Node* temp = new Node(data); //creating a new node which we want to add at tail
    tail->next = temp;  //as the new node will be the tail, so the next pointer of previous tail which was pointing to NULL earlier now will be pointing to new node
    temp->prev = tail; //the previous pointer of new node will be pointing to the tail
    tail = temp; //updating tail to the new tail
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    InsertatHead(head,21);
    InsertatHead(head,11);
    InsertatHead(head,8);
    InsertatHead(head,28);
    InsertatHead(head,31);
    InsertatHead(head,5);

    cout<<"Printing before inserting at tail position "<<endl;
    print(head);

    cout<<"Printing after inserting at tail: "<<endl;
    //InsertatTail(node1,25); we can do this also 
    InsertatTail(tail,25);
    print(head);
    return 0;
}