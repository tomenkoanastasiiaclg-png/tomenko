#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void push_back(Node *&head, int x) {
    Node *n = new Node;
    n->data = x;
    n->next = nullptr;

    if (!head) {
        head = n;
        return;
    }

    Node *p = head;
    while (p->next)
        p = p->next;

    p->next = n;
}

int main() {
    Node *head = nullptr;

    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        push_back(head, x);
    }

    Node *p = head;
    Node *maxN = head;
    Node *minN = head;

    while (p) {
        if (p->data > maxN->data) maxN = p;
        if (p->data < minN->data) minN = p;
        p = p->next;
    }

    Node *n = new Node;
    n->data = minN->data;
    n->next = maxN->next;
    maxN->next = n;

    Node *last = head;
    while (last->next)
        last = last->next;

    swap(head->data, last->data);

    p = head;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << endl;

    while (head) {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}
