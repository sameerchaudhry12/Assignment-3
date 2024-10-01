#include "Function.h"
void concatenate(List& list1, List& list2) {
    Node* temp = list1.GetHead();
    if (temp == NULL) {
        list1 = list2;
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = list2.GetHead();
}

List intersection(List& list1, List& list2) {
    List result;
    Node* temp1 = list1.GetHead();
    Node* temp2;

    while (temp1 != NULL) {
        temp2 = list2.GetHead();
        while (temp2 != NULL) {
            if (temp1->data == temp2->data) {
                result.Insert(temp1->data);
                break;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return result;
}

int compare(List& list1, List& list2) {
    Node* temp1 = list1.GetHead();
    Node* temp2 = list2.GetHead();

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data < temp2->data) {
            return -1;
        }
        else if (temp1->data > temp2->data) {
            return 1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 == NULL && temp2 == NULL) {
        return 0;
    }
    else if (temp1 == NULL) {
        return -1;
    }
    else {
        return 1;
    }
}