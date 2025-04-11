#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class List {
private:
    Node* head;

public:
    List() {
        head = nullptr;
    }
    void add(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }

    void show() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~List() {
        Node* current = head;
        while (current != nullptr) {
            Node* toDelete = current;
            current = current->next;
            delete toDelete;
        }
        cout << "Список уничтожен\n";
    }
};

int main() {
    setlocale(LC_ALL, ("rus"));
    List myList;

    myList.add(5);
    myList.add(10);
    myList.add(15);
    cout << "Список: ";
    myList.show();
    return 0;
}
