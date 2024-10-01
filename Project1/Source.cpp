#include "Stack.h"
#include <iostream>

int main() {
    Stack Stk;

    Stk.push(10);
    Stk.push(11);
    Stk.push(12);
    Stk.Display();
    Stk.pop();
    Stk.pop();
    cout << "Top element: " << Stk.top() << endl;
    Stk.pop();
    Stk.pop();
    Stk.Display();
    return 0;
}
