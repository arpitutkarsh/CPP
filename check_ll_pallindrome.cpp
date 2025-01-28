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
void insertatTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* reverse(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    Node* fwd = NULL;
    while(curr != NULL){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;

}
Node* findMiddle(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;

}
bool isPallindrome(Node* &head){
    //CHECK IF THE LIST IS NULL OR HAS ONLY ONE ELEMET=NT
    if(head == NULL || head->next == NULL){
        return true;
    }
    //NOW FINDING THE MIDDLE ELEMENT 
    Node* middle = findMiddle(head);
    //NOW REVERSING THE ELEMENT AFTER THE MIDDLE
    Node* temp = middle->next;
    //Adding the reversed list after the middle
    middle->next = reverse(temp);
    //Now comparing both the list starting from head and starting from middle -> next
    Node* head1 = head;
    Node* head2 = middle->next;
    while(head2 != NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
        //Now reversing again
    }
    temp = middle->next;
    middle->next = reverse(temp);
    return true;

}
int main(){
    Node* node1 = new Node(1);
    Node* tail = node1;
    Node* head = node1;
    insertatTail(tail, 2);
    insertatTail(tail,1);
    print(head);
    if(isPallindrome(head)){
        cout<<"The given linked list is PALLINDROME"<<endl;
    }
    else{
        cout<<"The given linked list is NOT PALLINDROME"<<endl;
    }
    return 0;
}