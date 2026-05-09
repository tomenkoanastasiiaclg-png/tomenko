#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void push_front(Node *&head, int x) {
    Node *n = new Node;
    n->data = x;
    n->next = head;
    head = n;
}

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

void print(Node *head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node *head = nullptr;

    int a, b, c;
    cin >> a >> b >> c;

    push_front(head, a);
    push_back(head, b);
    push_front(head, c);

    print(head);

    Node *p = head;
    Node *prev = nullptr;

    for (int i = 0; i < 1; i++) {
        prev = p;
        p = p->next;
    }

    prev->next = p->next;
    delete p;

    print(head);

    while (head) {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}
