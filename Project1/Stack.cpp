#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {
    topNode = NULL;
}

void Stack::push(int val) {
    Node* newNode = new Node(val);
    newNode->next = topNode;
    topNode = newNode;
    cout << val << " pushed onto stack." << endl;
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else {
        Node* temp = topNode;
        topNode = topNode->next;
        int poppedValue = temp->data;
        delete temp;
        cout << poppedValue << " popped from stack." << endl;
        return poppedValue;
    }
}

bool Stack::isEmpty() {
    return topNode == NULL;
}

int Stack::top() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return topNode->data;
}

void Stack::Display() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        Node* temp = topNode;
        cout << "Stack: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}
