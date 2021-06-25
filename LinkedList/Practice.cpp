#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert_at_tail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insert_at_head(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void delete_at_head(node *&head)
{
    node *toDelete = head;
    head = head->next;
    delete toDelete;
}

void delete_any_node(node *&head, int val)
{
    node *toDelete;
    node *temp = head;
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete_at_head(head);
    }
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node *recursiveReverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newHead = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main()
{
    node *head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    display(head);
    insert_at_head(head, 10);
    display(head);
    delete_at_head(head);
    display(head);
    delete_any_node(head, 2);
    display(head);
    cout << search(head, 3) << endl;
    node *newHead = reverse(head);
    display(newHead);
    node *recursiveHead = recursiveReverse(head);
    display(recursiveHead);
    return 0;
}