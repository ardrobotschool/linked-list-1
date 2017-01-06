#include <iostream>
#pragma once
#include "Student.h"

using namespace std;

class Node{
 private:
  Student* student;
  Node* next;
 public:
  Node* getNext();
  Student* getStudent();
  void setNext(Node*);
  Node(Student*);
  ~Node();
};
