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
    tail = temp;

}
int sizeofll(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        
        temp = temp->next;
        
    }
    return count;
}
//Brute force Approach written and thinked by me
Node* removeNthnodefromend(Node* &head, int n){
    Node* curr = head;
    int size = sizeofll(head);
    int count = 1;
    int stopsize = size - n;
    if((head->next == NULL) || size == 1 || size == 0){
        return NULL;
    }
    while(count != stopsize){
        count++;
        curr = curr->next;
    }
    Node* del = curr->next;
    Node* fwd = curr->next->next;
    curr->next->next = NULL;
    curr->next = fwd;
    free(del) ;
    return head;

}
//Optimised Approach
Node* removeKthnodefromend(Node* &head, int n){
    Node* fast = head;
    Node* slow = head;
    for(int i = 0; i < n; i++){
        fast = fast->next;
    }
    if(fast == NULL){
        return head->next;
    }
    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    Node* nextnode = slow->next;
    slow->next = slow->next->next;
    free(nextnode);
    return head;
}
int main(){
    Node* node1 = new Node(1);
    Node* tail = node1;
    Node* head = node1;
    insertatTail(tail,2);
    insertatTail(tail,3);
    insertatTail(tail,4);
    insertatTail(tail,5);
    
    //cout<<"Printing the Linked list"<<endl;
    //print(head);
    
    //Node* curr = head;
    //cout<<"Head of the Linked List is: "<<head->data<<endl;
    //int n = 2;
    //int size = sizeofll(head);
    //cout<<"Size of the linked list is: "<<size<<endl;
    //int count = 1;
    //int stopsize = size - n;
    //while(count != stopsize){
        //count++;
        //curr = curr->next;
    //}
    //cout<<"Value of count is: "<<count<<endl;
    //cout<<"Value of curr is: "<<curr->data<<endl;

    //Node* fwd = curr->next->next;
    //curr->next->next = NULL;
    //curr->next = fwd;
    //Node* node2 = removeNthnodefromend(head, 2);
    print(head);
    removeKthnodefromend(head, 2);
    print(head);
    return 0;
}