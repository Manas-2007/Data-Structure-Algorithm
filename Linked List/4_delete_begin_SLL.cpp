#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
// Traversal
void Traversal(Node *&head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

// Creating List
void CreateList(Node *&head, int size)
{
    Node *ptr = head;
    int data;
    for (int i = 1; i <= size; i++)
    {
        cout << "Data of Node " << i << " : ";
        cin >> data;
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            ptr = head;
        }
        else
        {
            ptr->next = newnode;
            ptr = ptr->next;
        }
    }
}

// Remove First Node
void RemoveFirst(Node *&head)
{
    Node *ptr = head;
    head = head->next;
    delete ptr;
    cout << "\n";
}

// Remove Last Node
void LastRemove(Node *&head)
{
    Node *ptr = head;
    Node *prev = NULL;
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    delete ptr;
    prev->next = NULL;
    cout << "\n";
}

// Remove Any Middle Node
void deleteNode(Node *&head, int pos)
{
    Node *ptr = head;
    Node *prev = NULL;
    if (pos == 1)
    {
        ptr = head;
        head = head->next;
        delete ptr;
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = ptr->next;
        delete ptr;
    }
}

int main()
{
    Node *head = NULL;
    int size, pos;
    cout << "TOTAL NODES : ";
    cin >> size;
    CreateList(head, size);
    Traversal(head);
    cout << "\nEnter position : ";
    cin >> pos;
    deleteNode(head, pos);
    Traversal(head);
    return 0;
}