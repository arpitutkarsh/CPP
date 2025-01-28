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
//It is using if else statement
Node* sort012(Node* &head){
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zerocount++;
        }
        else if(temp->data == 1){
            onecount++;
        }
        else if(temp->data == 2){
            twocount++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        if(zerocount != 0){
            temp->data = 0;
            zerocount--;
        }
        else if(onecount != 0){
            temp->data = 1;
            onecount--;
        }
        else if(twocount != 0){
            temp->data = 2;
            twocount--;
        }
        temp = temp->next;
    }
    return head;
}
//Using dummy list
void InsertatTail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}
Node* sortlist(Node* &head){
    //Creating dummy head nodes and dummy tail nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    while(curr != NULL){
        int val = curr->data;
        if(val == 0){
            InsertatTail(zeroTail, curr);
        }
        else if(val == 1){
            InsertatTail(oneTail, curr);
        }
        else if(val == 2){
            InsertatTail(twoTail, curr);
        }
        curr = curr->next;
    }

    //merging the dummy nodes
    //Suppose the first list is empty
    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    head = zeroHead->next;
    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);
    return head;
}
int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertattail(tail,0);
    insertattail(tail,2);
    insertattail(tail,1);
    insertattail(tail,2);
    print(head);
    sort012(head);
    print(head);
    sortlist(head);
    print(head);
    return 0;
}