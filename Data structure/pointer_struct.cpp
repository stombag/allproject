#include <iostream>

using namespace std;

int main()
{
    struct Node
    {

        int data;
        Node *next;
    };

    Node *head;
    Node n1;
    Node n2;
    Node n3;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;

    n1.data = 1;
    n2.data = 2;
    n3.data = 3;
    cout << head->data;
    cout << head->next->data;
    cout << head->next->next->data;
    return 0;
}
