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

void removeEven(Node *&front) {
    Node *cur = front;
    Node *prev = nullptr;

    while (cur) {
        if (cur->data % 2 == 0) {
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

int main() {
    Node *front = nullptr, *rear = nullptr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        push(front, rear, x);
    }

    removeEven(front);

    int sum = 0, count = 0;
    Node *p = front;

    while (p) {
        sum += p->data;
        count++;
        p = p->next;
    }

    if (count == 0)
        cout << "Queue is empty\n";
    else
        cout << "Average = " << (double)sum / count << endl;

    while (front) {
        Node *tmp = front;
        front = front->next;
        delete tmp;
    }

    return 0;
}
