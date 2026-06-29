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

int main() {

    int n;
    cout << "Enter number of nodes : ";
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 1; i <= n; i++)
    {
        int value;
        cout << "Enter value of node " << i << " : ";
        cin >> value;

        Node* newNode = new Node(value);

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "\nLinked List : ";

    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}