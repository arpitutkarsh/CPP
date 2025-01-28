#include<bits/stdc++.h>
//  #include "floyds_cycle_algo.cpp"
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
bool detectLoop(Node* &head){
    if(head == NULL){
        return false; //Suppose if the LINKED LIST is EMPTY, then we dont have to move forward, it is clear that the linked list has no loop
    }
    map<Node*, bool> visited; //We will be using map to identify if there is a cycle or not
    Node* temp = head;
    while(temp != NULL){ //What if there is a CIRCULAR LINKED LIST, as a CIRCULAR LINKED LIST Has no NULL
        if(visited[temp] == true){ //This line solves the problem for circular linked list
            cout<<"The loop is present on the element: "<<temp->data<<endl;
            return 1;  //We are returning true means that the current node is already visited which means that the LINKED LIST has a cycle
        }
        visited[temp] = true; //If the current node is not visited mark it true
        temp = temp->next;
    }
    return false;
}

//Using floyd cycle detection algorithm
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
    if(detectLoop(head)){
        cout<<"Loop is PRESENT"<<endl;
    }
    else{
        cout<<"Loop is NOT PRESENT"<<endl;
    }

    if(floydcycle(head) != NULL){
        cout<<"Loop is PREZENT"<<endl;
    }
    else{
        cout<<"Loop is NOT PREZENT"<<endl;
    }

    /*
    if(floyd(head) != NULL){
        cout<<"hue hue"<<endl;
    }
    else{
        cout<<"DUR dir"<<endl;
    }

    */

    
    return 0;
}