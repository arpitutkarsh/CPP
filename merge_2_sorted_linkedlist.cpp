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
Node* mergetwolist(Node* &list1, Node* &list2){
    if(list1 == NULL){
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }
    if(list1->data <= list2->data){
        return solve(list1)
    }
}

int main(){
    Node* node1 = new Node(1);
    Node* node2 = new Node(1);
    Node* head1 = node1;
    Node* head2 = node2;
    Node* tail1 = node1;
    Node* tail2 = node2;
    insertattail(tail1,2);
    insertattail(tail1, 4);
    insertattail(tail2, 3);
    insertattail(tail2, 4);
    print(head1);
    print(head2);
    return 0;
}