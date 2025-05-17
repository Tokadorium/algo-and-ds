#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

struct node {
  node *prev;
  int data;
  node *next;
};

class Doubly_linked_list {
private:
  node *m_head;

  int *add_node_head(const int data);
  int *add_node_tail(const int data);

  void remove_node_head();
  void remove_node_tail();

protected:
  node *get_node(const int position) const;
  int *add_node(const int position, const int data);

  void remove_node(const int position);

public:
  Doubly_linked_list();
  ~Doubly_linked_list();

  void print() const;
  int get_size() const;
  int *get_value(const int position) const;
};

#endif // DOUBLY_LINKED_LIST_H
