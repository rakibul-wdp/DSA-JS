#include <stdio.h>

typedef struct node Node;

struct node {
  int data;
  Node *left;
  Node *right;
  Node *parent;
};

Node *bst_insert(Node *root, Node *node) {
  Node *parent_node, *current_node;

  if (root == NULL) {
    root = node;
    return root;
  }

  parent_node = NULL;
  current_node = root;
  while (current_node != NULL) {
    parent_node = current_node;
    if (node->data < current_node->data) {
      current_node = current_node->left;
    } else {
      current_node = current_node->right;
    }
  }

  if (node->data < parent_node->data) {
    add_left_child(parent_node, node);
  } else {
    add_right_child(parent_node, node);
  }

  return root;
}

Node *bst_transplant(Node *root, Node *current_node, Node *new_node) {
  if (current_node == root) {
    root = new_node;
  } else if (current_node == current_node->parent->left) {
    add_left_child(current_node->parent, new_node);
  } else {
    add_right_child(current_node->parent, new_node);
  }

  return root;
}