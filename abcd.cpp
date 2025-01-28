#include <iostream>
using namespace std;

// Define the structure for a node in the doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Function to insert a new node at the end of the list
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to print the doubly linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";  // Print each element followed by a space
        temp = temp->next;
    }
    cout << endl;  // Print a newline after the list
}

// Function to sort the doubly linked list using insertion sort
void insertionSort(Node*& head) {
    if (head == nullptr) return;

    Node* sorted = nullptr;

    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        
        if (sorted == nullptr || sorted->data >= current->data) {
            current->next = sorted;
            if (sorted != nullptr) sorted->prev = current;
            sorted = current;
            sorted->prev = nullptr;
        } else {
            Node* temp = sorted;
            while (temp->next != nullptr && temp->next->data < current->data) {
                temp = temp->next;
            }
            current->next = temp->next;
            if (temp->next != nullptr) temp->next->prev = current;
            temp->next = current;
            current->prev = temp;
        }
        
        current = next;
    }
    
    head = sorted;
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertAtEnd(head, val);
    }

    cout << "Original List: ";
    printList(head);

    insertionSort(head);

    cout << "Sorted List: ";
    printList(head);

    // Free the allocated memory
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
