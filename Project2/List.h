#pragma once
#include"Node.h"
#include<iostream>
class List {
private:
    Node* head;

public:
    List();
    void Insert(int val);
    void Display();
    ~List();
};
