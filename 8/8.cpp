#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void additem(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << endl;
        current = current->next;
    }
}

int main() {
    setlocale(LC_ALL, ("rus"));
    Node* head = NULL;

    additem(head, 25);
    additem(head, 36);
    additem(head, 49);
    additem(head, 64);
    printList(head);

    return 0;
}
