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

// CHECK FOR PALLENDROME
bool isPall(Node *head) {
  Node *midNode = MiddleNodeLL(head);
  Node *revNode = revLL(midNode);
  while (head != revNode) {
    if (head->data != revNode->data) {
      return false;
    }
    head = head->next;
    revNode = revNode->next;
  }
  return true;
}
int main() {
  Node *head = takeinput();
  bool pall = isPall(head);
  if (pall) {
    cout << "entered linked list is pallendrome" << endl;
  } else {
    cout << "not a pallendrome" << endl;
  }
}
