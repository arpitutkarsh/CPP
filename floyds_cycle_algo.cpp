#include<bits/stdc++.h>
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

Node* floyd(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;

}