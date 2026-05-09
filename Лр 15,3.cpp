#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void push(Node *&front, Node *&rear, int x) {
    Node *n = new Node;
    n->data = x;
    n->next = nullptr;

    if (!front) front = rear = n;
    else {
        rear->next = n;
        rear = n;
    }
}

void sortList(Node *head) {
    for (Node *i = head; i; i = i->next)
        for (Node *j = i->next; j; j = j->next)
            if (i->data > j->data)
                swap(i->data, j->data);
}

void removeBetween(Node *&head) {
    if (!head) return;

    Node *p = head;
    Node *minN = head, *maxN = head;

    while (p) {
        if (p->data < minN->data) minN = p;
        if (p->data > maxN->data) maxN = p;
        p = p->next;
    }

    Node *cur = head;
    Node *prev = nullptr;

    bool del = false;

    while (cur) {
        if (cur == minN || cur == maxN) {
            del = !del;
            prev = cur;
            cur = cur->next;
            continue;
        }

        if (del) {
            Node *tmp = cur;
            prev->next = cur->next;
            cur = cur->next;
            delete tmp;
        } else {
            prev = cur;
            cur = cur->next;
        }
    }
}

int main() {
    Node *front = nullptr, *rear = nullptr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        push(front, rear, x);
    }

    removeBetween(front);
    sortList(front);

    for (Node *p = front; p; p = p->next)
        cout << p->data << " ";

    cout << endl;

    while (front) {
        Node *tmp = front;
        front = front->next;
        delete tmp;
    }

    return 0;
}
