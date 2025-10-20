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

  //need a split function
  //need a merge function
  //need a mergeSort function
};

int main() {
  return 0;
}
