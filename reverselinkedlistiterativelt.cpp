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
//Recursive solution
void reverse(Node* &head, Node* curr, Node* prev){
    //Base Case
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* fwd = curr->next;
    reverse(head,fwd,curr);
    curr->next = prev;
}
Node* reverselinkedlist(Node* head){
    //if the list is empty or having one element
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* fwd = NULL;
    while(curr != NULL){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}
int main(){

    return 0;
}