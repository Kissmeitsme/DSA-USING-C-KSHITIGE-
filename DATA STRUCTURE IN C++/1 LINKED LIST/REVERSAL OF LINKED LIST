#include <iostream>
using namespace std;

// structure of node
struct Node {
  int data;
  struct Node *next;

  // constructor  
  Node(int x) {
    this->data = x;
    next = NULL;
  }
};

// TAKING INPUT DYNAMICALLY BY USER
Node *takeinput() {
  Node *head = NULL;
  Node *tail = NULL;
  int data;
  cin >> data;
  while (data != -1) {
    Node *curr = new Node(data);
    if (head == NULL) {
      head = curr;
      tail = curr;
    }
    tail->next = curr;
    tail = tail->next;
    cin >> data;
  }
  return head;
}

// PRINTING THE CONTENT OF LINKED LIST
void printLL(Node *head) {
  if (head == NULL) {
    cout << endl;
    return;
  } else {
    cout << head->data << " ";
    printLL(head->next);
  }
}

// REVERSAL OF LINKED LIST ITERATIVELY
Node *revLL(Node *head) {
  Node *curr = head;
  Node *pre = NULL;
  while (curr != NULL) {
    Node *temp = curr->next;
    curr->next = pre;
    pre = curr;
    curr = temp;
  }
  return pre;
}

// REVERSING A LINKED LIST USING RECURSION
Node *revRecLL(Node *head) {
  if(head==NULL || head->next==NULL){
    return head;
  }
  Node* newHead=revRecLL(head->next);
  Node* headNext=head->next;
  headNext->next=head;
  head->next=NULL;
  return newHead;
}

int main() {

  Node *head = takeinput();
  cout << "linked list before reversal" << endl;
  printLL(head);
  
  head = revLL(head);
  cout << "linked list reversed using iteration" << endl;
  printLL(head);

  head=revRecLL(head);
  cout<<"linked list reversed using recursion"<<endl;
  printLL(head);
}
