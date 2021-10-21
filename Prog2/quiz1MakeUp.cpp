/*
    Name: <Jonathan Nelson>
    Date: <09/24/2021>
    Desc: Quiz 1 Makeup
*/

#include <iostream>

using namespace std;

struct node_t
{
    int data;
    node_t *next;
};

int main()
{
    node_t *b = new node_t;
    b->next = new node_t;
    b->next->data = 9;
    b->next->next = NULL;

    node_t *a = new node_t;
    a->next = new node_t;
    a->next->data = 4;
    a->next->next = new node_t;
    a->next->next->data = 8;
    a->next->next->next = b->next;

    node_t *c = new node_t;
    c->next = new node_t;
    c->next->data = 3;
    c->next->next = a->next->next;

    node_t *temp = new node_t;
    temp = a;
    while (temp->next)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
    cout << endl
         << endl;

    temp = b;
    while (temp->next)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
    cout << endl
         << endl;

    temp = c;
    while (temp->next)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
    cout << endl
         << endl;

    node_t *d = new node_t;
    d->next = new node_t;
    d->next->data = 2;
    d->next->next = new node_t;
    d->next->next->data = 7;
    d->next->next->next = NULL;

    temp = d->next;
    d = d->next->next;
    delete temp;

    cout << d->data << endl
         << endl;
}