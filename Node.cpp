#include <iostream>
#include "Node.h"

using namespace std;

Node* Node::getNext(){
  return next;
}

Student* Node::getStudent(){
  return student;
}

void Node::setNext(Node* node){
  next = node;
}

Node::Node(Student* newStudent){
  student = newStudent;
  next = NULL;
}

Node::~Node(){
  delete student;
  student = NULL;
}
