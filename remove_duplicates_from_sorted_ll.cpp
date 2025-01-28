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

void insertattail(Node* &tail, int data){
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
Node* remove_duplicates_from_sorted_linked_list(Node* &head){
    //if the list is empty
    if(head == NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr != NULL){
        if((curr->next != NULL) && curr->data == curr->next->data){
            Node* nextnode = curr->next->next;
            Node* deletion = curr->next;
            delete(deletion);
            curr->next = nextnode;
        }
        else{
            curr = curr->next;
        }

    }
    return head;
}
int main(){
    Node* node1 = new Node(1);
    Node* tail = node1;
    Node* head = node1;
    insertattail(tail, 1);
    insertattail(tail,2);
    insertattail(tail,3);
    insertattail(tail,3);
    cout<<"Before deleting the duplicate nodes: ";
    print(head);
    cout<<"After deleting the duplicate nodes: ";
    remove_duplicates_from_sorted_linked_list(head);
    print(head);

    return 0;
}