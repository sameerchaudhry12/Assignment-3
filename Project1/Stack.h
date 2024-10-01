#pragma once
#include"Node.h"
using namespace std;
class Stack
{
public:
	Stack();
	Node* topNode;
	void push(int newValue);
	int pop();
	bool isEmpty();
	int top();
	void Display();
	~Stack();

};

