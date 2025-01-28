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
Node* reverseList(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    Node* fwd = NULL;
    while(curr != NULL){
        fwd = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}
void insertionatTail(Node* &head, Node* &tail, int value){
    Node* temp = new Node(value);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
Node* add(Node* &first, Node* &second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL && second != NULL){
        int sum = carry + first->data + second->data;
        int digit = sum % 10;
        insertionatTail(ansHead, ansTail, digit);
        carry = carry /10;
        first = first->next;
        second = second->next;
    }
    //if one list is larger than the other list
    while(first != NULL){
        int sum = carry + first->data;
        int digit = sum % 10;
        insertionatTail(ansHead, ansTail, digit);
        carry = sum /10;
        first = first->next;
    }
    while(second != NULL){
        int sum = carry + second->data;
        int digit = sum % 10;
        insertionatTail(ansHead, ansTail, digit);
        carry = sum /10;
        second = second->next;
    }
    while(carry != 0){
        int sum = carry;
        int digit = sum % 10;
        insertionatTail(ansHead, ansTail, digit);
        carry = sum /10;
    }
    return ansHead;
}
Node* ansList(Node* first, Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL || second != NULL || carry != 0){
        int val1 = 0;
        if(first != NULL){
            val1 = first ->data;
        }
        int val2 = 0;
        if(second != NULL){
            val2 = second->data;
        }
        int sum = carry + val1 + val2;
        int digit = sum % 10;
        insertionatTail(ansHead, ansTail, digit);
        carry = sum /10;
        if(first != NULL){
            first = first->next;
        }
        if(second != NULL){
            second = second->next;
        }
        
    }
    return ansHead;
}
Node* addTwolist(Node* &first, Node* &second){
    //reversing both the list
    first = reverseList(first);
    second = reverseList(second);
    Node* ans = ansList(first, second);
    //reverse ans linked list
    ans = reverseList(ans);
    return ans;
}
int main(){
    Node* node1 = new Node(4);
    Node* node2 = new Node(3);
    Node* head1 = node1;
    Node* head2 = node2;
    Node* tail1 = node1;
    Node* tail2 = node2;
    insertatTail(tail1, 5);
    insertatTail(tail2, 4);
    insertatTail(tail2, 5);
    print(head1);
    print(head2);
    Node* answer = addTwolist(node1, node2);
    print(answer);
    return 0;

}