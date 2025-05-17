#include "stack.h"

int *Stack::push(const int data) { return add_node(get_size(), data); }

int *Stack::pop() {
  int *popped_value{get_value(get_size() - 1)};

  remove_node(get_size() - 1);

  return popped_value;
}
