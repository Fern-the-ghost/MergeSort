#include <iostream>
#include <cmath>
using namespace std;

struct Node {
  int data;
  Node* next;
  Node* prev;

Node(int newData) {
      data = newData;
      next = nullptr;
      prev = nullptr;
  }
};

class LinkList {
  Node *head;

  LinkList() {
    head = nullptr;
  }

void split (node* head,node*&a,node*&b) {
}

Node merge(node* a, node* b) {
}

Node mergeSort( node* head) {
}

};

int main() {
  return 0;
}
