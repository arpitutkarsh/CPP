#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //COnstructor
    Node(int input){
        this->data = input;
        this->next = NULL;
    }
    
};
void InsertatHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    
}
void InsertatTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
void deleteNode(int position, Node* &head){
    //Deleting the head or the starting node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
    }
    else{
        //Deleting for any node except the first node
        Node* current = head;
        Node* previous = NULL;
        int current_position = 1;
        while(current_position < position){
            previous = current;
            current = current->next;
            current_position++;
        }
        previous->next = current->next;
        free(current);
    }
}

void print(Node* & head){
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
    cout<<"Printing the Linked List before any deletion: ";
    InsertatHead(head,11);
    InsertatHead(head,12);
    InsertatHead(head,13);
    InsertatHead(head,14);
    InsertatHead(head,15);
    InsertatHead(head,16);
    InsertatHead(head,17);
    InsertatHead(head,18);
    InsertatHead(head,19);
    InsertatHead(head,20);
    print(head);
    deleteNode(1,head);
    cout<<"Deleting the head node that is 20: ";
    print(head);
    cout<<"Deleting the last node that is 10: ";
    deleteNode(10,head);
    print(head);
    cout<<"Deleting any other node, suppose 13 at position 7 ";
    deleteNode(7,head);
    print(head);
    cout<<head<<endl;

    return 0;
}