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
//Using two while loops
Node* deletef(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr != NULL){
        Node* temp = curr;
        while(temp!= NULL){
            if((temp->next != NULL) && temp->next->data == curr->data){
                Node* fwd = temp->next->next;
                Node* del = temp->next;
                delete(del);
                temp->next = fwd;
            }
            else{
                temp = temp->next;
            }
            
        }
        curr = curr->next;
    }
    return head;
}
//Using map
Node* deleteusingmap(Node* &head){
    map<int, int> mpp;
    Node* curr = head;
    Node* prev = NULL;
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    while(curr != NULL){
        mpp[curr->data]++;
        if(mpp[curr->data] > 1){
            Node* fwd = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete(fwd);
        }
        else{
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}
int main(){
    Node* node1 = new Node(4);
    Node* tail = node1;
    Node* head = node1;
    insertattail(tail, 2);
    insertattail(tail,5);
    insertattail(tail,4);
    insertattail(tail,2);
    insertattail(tail,2);
    print(head);
    deletef(head);
    print(head);
    deleteusingmap(head);
    print(head);

    

    return 0;
}