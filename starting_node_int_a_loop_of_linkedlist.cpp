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
Node* floydcycle(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            cout<<"Present at: "<<slow->data<<" this is not the beginning of the loop, it is inside the loop"<<endl;
            return slow;
        }
    }
    return NULL;
}
//Using floyd's cycle detection algo to identify the starting node
Node* getstartingNode(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floydcycle(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeLoop(Node* head){
    if(head == NULL){
        return;
    }
    Node* start = getstartingNode(head);
    Node* temp = start;
    while(temp->next != start){
        temp = temp->next;
    }
    temp->next = NULL;
}
//GET STARTING NODE WITH FLOYD CYCLE BUT WITHOUT CREATING ANOTHER FUNCTION
Node* detectstart(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }
    if(fast == NULL || fast->next == NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp != slow){
        temp = temp->next;
        slow = slow->next;
    }
    return temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
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
    Node* start = getstartingNode(head);
    cout<<"Loop starts at: "<<start->data<<endl;
    removeLoop(head);
    print(head);
    Node*  starting = detectstart(head);
    cout<<"LOOP STYARTS AT"<<starting->data<<endl;
    return 0;
}