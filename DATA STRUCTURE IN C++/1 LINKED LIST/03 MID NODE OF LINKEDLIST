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

// FINDING MIDDLE NODE USING FAST AND SLOW POINTER
Node *MiddleNodeLL(Node *head) {
  Node *fast = head;
  Node *slow = head;
  while (fast != NULL && fast->next != NULL) {
    fast = fast->next->next;
    slow = slow->next;
  }
  return slow;
}
int main() {
  Node* head=takeinput();
  
  cout<<"middle node is"<<endl;
  Node* mid=MiddleNodeLL(head);
  cout<<mid->data;
}
