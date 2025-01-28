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
void InsertatPosition(Node* &head,Node* &tail, int position, int data){
    Node* temp = head;
    //Insert at Starting
    if(position == 1){
        Node* temp1 = new Node(data);
        temp1->next = head;
        head = temp1;
        return;
    }
    if(temp->next == NULL){
        Node* temp2 = new Node(data);
        tail->next = temp2;
        tail = tail->next;
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

void print(Node* & head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    //Node* node1 = new Node(100);
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<endl;
    InsertatPosition(head,tail,1,25);
    InsertatPosition(head,tail,3,5);
    InsertatPosition(head,tail,2,2);
    InsertatPosition(head,tail,5,9);
    InsertatPosition(head,tail,3,20);
    print(head);
    //InsertatPosition(head)
    return 0;
}