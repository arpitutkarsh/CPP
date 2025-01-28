#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};

void insertattail(Node* &tail, int val){
    Node* temp = new Node(val);
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
    Node* node1 = new Node(4);
    Node* node2 = new Node(5);
    Node* head1 = node1;
    Node* tail1 = node1;
    Node* head2 = node2;
    Node* tail2 = node2;
    inse
    return 0;
}