#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() : head(NULL) {}

    void append(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            head->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void display() const {
        if (head == NULL) return;
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    void swapFirstAndLast() {
        if (head == NULL || head->next == head) return; // If list is empty or has only one node

        Node *first = head, *last = head;

        while (last->next != head) {
            last = last->next;
        }

        // Swap the data of the first and last nodes
        swap(first->data, last->data);
    }
};

int main() {
    int n;
    cout << "Enter number of persons: ";
    cin >> n;
    CircularLinkedList cll;
    cout << "Enter their positions: ";
    for (int i = 0; i < n; ++i) {
        int position;
        cin >> position;
        cll.append(position);
    }

    cout << "Before Swap: ";
    cll.display();

    cll.swapFirstAndLast();

    cout << "After Swap: ";
    cll.display();

    return 0;
}
