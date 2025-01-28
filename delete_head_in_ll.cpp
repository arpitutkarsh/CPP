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
    tail->next = temp;
    tail = tail->next;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* deletehead(Node* head){
    
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;

}
int main(){
    Node* node1 = new Node(2);
    Node* tail = node1;
    Node* head = node1;
    InsertatTail(node1, 4);
    InsertatTail(node1, 5);
    print(head);
    int count = 0;
    int pos = 2;
    Node* temp = head;
    cout<<endl;
    while(count < pos){
        //cout<<"Here count is: "<<count<<" and value is: "<<temp->data<<endl;
        //cout<<"Now count is: "<<count<<endl;
        temp = temp->next;
        //cout<<"Now valu eis: "<<temp->data<<endl;
        count++;
    }
    cout<<temp->data<<endl;
    temp->next = 
    //head = deletehead(head);
    //cout<<"a";
    //print(head);

    return 0;
}