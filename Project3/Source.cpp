#include"List.h"
#include"Node.h"
#include"Function.h"
#include<iostream>
using namespace std;

int main() {
    List L1, L2, res;

    L1.Insert('a');
    L1.Insert('c');
    L1.Insert('e');

    L2.Insert('b');
    L2.Insert('c');
    L2.Insert('d');

    cout << "List 1: ";
    L1.Display();

    cout << "List 2: ";
    L2.Display();

    cout << "Concatenating lists" << endl;
    concatenate(L1, L2);
    L1.Display();

    cout << "Finding intersection" << endl;
    res = intersection(L1, L2);
    res.Display();

    cout << "Comparing lists..." << endl;
    int cmp = compare(L1, L2);
    if (cmp == 0) {
        cout << "Lists are the same." << endl;
    }
    else if (cmp == 1) {
        cout << "List 1 is lexicographically greater." << endl;
    }
    else {
        cout << "List 2 is lexicographically greater." << endl;
    }

    return 0;
}
