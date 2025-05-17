#ifndef CIRCULAR_ARRAY_H
#define CIRCULAR_ARRAY_H

#include <optional>

class Circular_array {
private:
  int *array;
  int front;
  int rear;
  int size;
  int capacity;

  int inc(int index) const { return (index + 1) % capacity; }
  int dec(int index) const { return (index - 1 + capacity) % capacity; }

public:
  Circular_array(int capacity);
  ~Circular_array();

  int get_size() const;
  std::optional<int> get_element(int index) const;
  void print() const;

  bool add(int data);
  void rm();
};

#endif // CIRCULAR_ARRAY_H