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

void insert(Node* &tail, int data){
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
Node* oddeven(Node* &head){
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL && temp->next != NULL){
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp){
        arr.push_back(temp->data);
    }
    temp = head->next;
    while(temp != NULL && temp->next != NULL){
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp){
        arr.push_back(temp->data);
    }
    int i = 0;
    temp = head;
    while(temp != NULL){
        temp->data = arr[i];
        temp = temp->next;
        i = i + 1;
    }
    
    return head;
}
Node* evenodd(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* odd = head;
    Node* even = head -> next;
    Node* evenHead = head->next;
    while(even != NULL && even->next != NULL){
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next->next;
    }
    odd->next = evenHead;
    return head;
}
int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    insert(tail, 3);
    insert(tail, 4);
    insert(tail, 2);
    insert(tail, 5);
    insert(tail, 6);
    Node* temp = oddeven(head);
    //print(temp);
    Node* tempo = evenodd(head);
    print(tempo);
    //print(head);
    return 0;
}