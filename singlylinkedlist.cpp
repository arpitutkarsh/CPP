#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //Constructor in Singly Linked List
    
    Node(int input){
        this->data = input; // We can also wete data = input
        this->next = NULL;  // We can also write next = NULL
    }
};

void InsertElementatHead(Node* &head, int d){ //Here we have taken &head because we dont want to create copy of the linked list instead we want to make changes in the original linked list
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertatTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp -> next;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    //cout << node1->data <<endl;
    //cout << node1->next<<endl;
    Node* head = node1;
    InsertElementatHead(head, 12);
    print(head);
    InsertElementatHead(head, 17);
    print(head);

    return 0;
}