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

    if (!front) {
        front = rear = n;
    } else {
        rear->next = n;
        rear = n;
    }
}

void removeDiv3(Node *&front) {
    Node *cur = front;
    Node *prev = nullptr;

    while (cur) {
        if (cur->data % 3 == 0) {
            Node *tmp = cur;
            if (prev)
                prev->next = cur->next;
            else
                front = cur->next;

            cur = cur->next;
            delete tmp;
        } else {
            prev = cur;
            cur = cur->next;
        }
    }
}

void swapMinMax(Node *front) {
    if (!front) return;

    Node *p = front;
    Node *minN = front;
    Node *maxN = front;

    while (p) {
        if (p->data < minN->data) minN = p;
        if (p->data > maxN->data) maxN = p;
        p = p->next;
    }

    swap(minN->data, maxN->data);
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

    swapMinMax(front);

    removeDiv3(front);

    Node *p = front;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << endl;

    while (front) {
        Node *tmp = front;
        front = front->next;
        delete tmp;
    }

    return 0;
}
