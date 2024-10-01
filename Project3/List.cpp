#include "List.h"
#include <iostream>

using namespace std;

List::List() {
    head = NULL;
}

void List::Insert(char val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void List::Display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node* List::GetHead() {
    return head;
}

List::~List() {
    Node* current = head;
    Node* nextNode;

    while (current != NULL) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}
