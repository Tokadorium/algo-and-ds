#ifndef STACK_H
#define STACK_H

#include "doubly_linked_list.h"

class Stack : protected Doubly_linked_list {
public:
  int *push(const int data);
  int *pop();
  using Doubly_linked_list::print;
};

#endif // STACK_H
