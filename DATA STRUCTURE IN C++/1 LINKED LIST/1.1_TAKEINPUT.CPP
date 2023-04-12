#include <iostream>
using namespace std;
struct Node
{
    // STRUCTURE OF NODE
    int data;
    struct Node *next;

    // CONSTRUCTOR
    Node(int x)
    {
        this->data = x;
        next = NULL;
    }
};

Node *takeInput()
{
    Node *head = NULL;
    Node *tail = NULL;
    int data; 
    cin >> data;
    while (data != -1)
    {
        Node *curr = new Node(data);
        if (head == NULL)
        {
            head = curr;
            tail = curr;
        }
        else
        {
            tail->next = curr;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
void printLL(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    else
    {
        cout << head->data;
        printLL(head->next);
    }
}

int main()
{
    Node *head = takeInput();
    printLL(head);
    return 0;
}