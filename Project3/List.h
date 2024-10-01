#pragma once
#include "Node.h"

class List {
private:
    Node* head;

public:
    List();
    void Insert(char val);
    void Display();
    Node* GetHead(); 
    ~List();
};

