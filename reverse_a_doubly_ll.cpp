#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertatTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
Node* reverseDLL(Node * head){
    //Your code here
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL){
        prev = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = prev;
        curr = curr -> prev;
    }
    return prev -> prev;
}

int main(){
    Node* node1 = new Node(4);
    Node* head = node1;
    Node* tail = node1;

    insertatTail(tail, 3);
    insertatTail(tail, 2);
    insertatTail(tail, 1);
    print(head);
    reverseDLL(head);
    print(tail);
    print(tail);
    return 0;
}