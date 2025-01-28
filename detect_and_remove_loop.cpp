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
void removeLoop(Node* head) {
    // code here
    // just remove the loop without losing any nodes
    if(head == NULL){
        return;
    }
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            break;
        }
    }
    if(fast == NULL || fast->next == NULL){
        return;
    }
    if(slow == head){
        slow = slow->next;
        while(slow->next != head){
            slow = slow->next;
        }
        slow->next = NULL;
        return;
    }
    slow = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
}
void print(Node* &head){
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
    Node* tail = node1;
    insertattail(tail, 22);
    insertattail(tail,23);
    insertattail(tail,2);
    insertattail(tail,3);
    insertattail(tail,11);
    insertattail(tail,17);
    print(head);
    tail->next = head->next;
    cout<<head->data<<" "<<tail->data<<endl;
    print(head);
    removeLoop(head);
    cout<<"Removing the loop: ";
    print(head);
    return 0;
}
