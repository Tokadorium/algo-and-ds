#include "circular_array.h"

#include <iostream>
#include <optional>

Circular_array::Circular_array(int capacity)
    : front(0), rear(0), size(0), capacity(capacity) {
  array = new int[capacity];
}

Circular_array::~Circular_array() { delete[] array; }

int Circular_array::get_size() const { return size; }

std::optional<int> Circular_array::get_element(int index) const {
  if (index < 0 || index >= size)
    return std::nullopt;
  return array[(front + index) % capacity];
}

void Circular_array::print() const {
  for (int i = 0; i < size; ++i) {
    std::cout << array[(front + i) % capacity] << " ";
  }
  std::cout << std::endl;
}

bool Circular_array::add(int data) {
  if (size == capacity) {
    std::cout << "Buffer is full" << std::endl;
    return false;
  }
  array[rear] = data;
  rear = inc(rear);
  ++size;
  return true;
}

void Circular_array::rm() {
  if (size == 0) {
    std::cout << "Buffer empty" << std::endl;
    return;
  }
  front = inc(front);
  --size;
}