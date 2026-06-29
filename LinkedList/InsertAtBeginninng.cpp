#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Head par insert
void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Display
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

    Node* head = NULL;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int value;
        cout << "Enter value " << i << ": ";
        cin >> value;

        insertAtHead(head, value);
    }

    cout << "\nLinked List: ";
    display(head);

    return 0;
}