#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{

    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertNode(int);

    void printLL();

    void findNode(int);
};

void LinkedList ::insertNode(int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList ::printLL()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void LinkedList::findNode(int f)
{
    Node *temp = head;
    if (head == NULL)
        cout << "-1";

    while (temp != NULL)
    {
        if (temp->data == f)
        {
            cout << "1";
            break;
        }

        else
        {
            temp = temp->next;
        }
    }

    cout << "-1";
}

int main()
{
    LinkedList list;
    int x;
    cin >> x;
    while (x != -1)
    {
        list.insertNode(x);
        cin >> x;
    }
    list.printLL();

    int f;
    cin >> f;

    list.findNode(f);
}