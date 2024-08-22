#include <iostream>
#include <string>
#include <string.h>
#include <list>
#include <assert.h>
#include <vector>
#include <stack>
#include <queue>

struct Node
{
    int data;
    Node *next;
};

Node *head = nullptr;
Node *tail = nullptr;

// queue
// void push(int value) {
//     if (head == nullptr) {
//         Node* buff = new Node();
//         buff->data = value;
//         head = buff;
//         tail = buff;
//     }
//     else {
//         tail->next = new Node();
//         tail = tail->next;
//         tail->data = value;
//     }
// }

// Stack
void push(int value)
{
    Node *buff = new Node();
    buff->data = value;
    buff->next = head;
    head = buff;
}

void pop()
{

    Node *backup = head;
    head = head->next;
    delete backup;
}
int top()
{
    return head->data;
}
int main()
{
    push(1);
    push(2);
    push(6);
    push(4);
    push(7);

    int Top = top();

    pop();
    return 0;
}
