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
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);
    
    InsertatHead(head,21);
    InsertatHead(head,11);
    InsertatHead(head,8);
    InsertatHead(head,28);
    InsertatHead(head,31);
    InsertatHead(head,5);

    print(head);
  
  



    return 0;
}