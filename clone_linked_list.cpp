#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int val){
        this->data = val;
        this->next = NULL;
        this->random = NULL;
    }
};

void insertatTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
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
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    insertatTail(tail,2);
    insertatTail(tail,3);
    insertatTail(tail,4);
    insertatTail(tail,5);
    print(head);

    return 0;
}