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

void Insert_at_Tail(Node* &head, int d) {
    // new node create
    Node* temp = new Node(d);
    if (head == NULL) {
        head = temp;
        return;
    }
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = temp;
}

void Delete_Node(Node* &head, int key) {
    if (head == NULL) return;

    Node* temp = head;
    if (head->data == key) {
        head = head->next;
        delete temp;
        return;
    }

    Node* prev = NULL;
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    delete temp;
}

void Display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL;

    Insert_at_Head(head, 10);
    Insert_at_Head(head, 20);
    Insert_at_Tail(head, 30);
    Insert_at_Tail(head, 40);

    cout << "Linked List: ";
    Display(head);

    Delete_Node(head, 20);
    cout << "After Deletion: ";
    Display(head);

    return 0;
}