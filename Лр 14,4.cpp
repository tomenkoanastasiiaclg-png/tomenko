#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    float price;
    Node *next;
};

void push_back(Node *&head, string name, float price) {
    Node *n = new Node;
    n->name = name;
    n->price = price;
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
        cout << head->name << " - " << head->price << " грн\n";
        head = head->next;
    }
}

int main() {
    Node *head = nullptr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        float price;

        cin >> name >> price;
        push_back(head, name, price);
    }

    print(head);

    int count = 0;
    Node *p = head;

    cout << "\nItems < 10 грн:\n";

    while (p) {
        if (p->price < 10) {
            cout << p->name << " - " << p->price << " грн\n";
            count++;
        }
        p = p->next;
    }

    cout << "Count = " << count << endl;

    while (head) {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}
