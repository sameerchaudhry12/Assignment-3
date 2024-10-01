#include "List.h"
#include <iostream>
using namespace std;

List::List() {
    head = NULL;
}

void List::Insert(int val) {
    Node* newNode = new Node(val);

    if (head == NULL || head->data >= val) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL && temp->next->data < val) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void List::Display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
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
