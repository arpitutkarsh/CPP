#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

// Function to insert a node at the front of the linked list
void insertFront(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to find the middle element of the linked list
int findMiddleElement(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main() {
    int n;
    cin >> n;
    Node* head = NULL;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertFront(head, val);
    }

    cout << "Linked List: ";
    printList(head);

    int middleElement = findMiddleElement(head);
    cout << "Middle Element: " << middleElement << endl;

    return 0;
}
