#include <iostream>
#include <cmath>
using namespace std;

Struct Node{
  int data;
  Node* next;
  Node* prev;

  struct Node(int newData)
  {
      data = newData;
      next = nullptr;
      prev = nullptr;
  }
};
