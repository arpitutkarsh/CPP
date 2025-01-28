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
/*
void deletemiddle(Node* &head){
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        cout<<slow->data<<"       "<<fast->data<<endl;
    }
    //Node* temp = head;
    //cout<<temp->next->data<<endl;
    //while(temp->next->data != slow->data){
    //    temp = temp->next;
    //    cout<<temp->data<<"    "<<slow->data<<endl;
        
    //}
    
    cout<<"Slow= "<<slow->data<<endl;
    //cout<<fast->data<<endl;
}
*/
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
    /*
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        cout<<"Slow: "<<slow->data<<" fast:      "<<fast->data<<endl;
    }
    */
    Node* temp = head;
    while((temp->next->data) != (15)){
        temp = temp->next;
        cout<<"Value of temp is: "<<temp->data<<endl;
    }


    
    return 0;
}
