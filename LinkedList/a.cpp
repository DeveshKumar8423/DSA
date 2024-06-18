#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void Insert_at_Head(Node* &head, int d) {
    // new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Insert_at_tail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void Insert_at_position(Node* &head, Node* &tail, int position, int d) {
    if (position == 1) {
        Insert_at_Head(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    // Inserting at last position
    if (temp->next == NULL) {
        Insert_at_tail(tail, d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

int main() {
    // create a new node
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // head pointed to the node
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout << endl;

    Insert_at_Head(head, 9);
    Insert_at_Head(head, 5);
    Insert_at_position(head, tail, 1, 103);
    Insert_at_tail(tail, 12);
    Insert_at_tail(tail, 20);

    print(head);

    return 0;
}
