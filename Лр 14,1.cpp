#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    Node *head = nullptr, *tail = nullptr;

    for (int i = 0; i < 4; i++) {
        Node *newNode = new Node;
        cin >> newNode->data;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node *p = head;
    while (p->next->next != nullptr)
        p = p->next;

    int sum = p->data + p->next->data;
    cout << "Sum = " << sum << endl;

    Node *temp = head;
    head = head->next;
    delete temp;

    int count = 0;
    p = head;

    while (p != nullptr) {
        if (p->data % 2 == 0)
            count++;
        p = p->next;
    }

    cout << "Even count = " << count << endl;

    while (head != nullptr) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
