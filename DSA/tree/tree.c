#include <stdio.h>

typedef struct node Node;

struct node {
  int data;
  Node *left;
  Node *right;
};

Node *create_node(int item) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (new_node == NULL) {
    printf("Error! Could Not Create A New Node\n");
    exit(1);
  }

  new_node->data = item;
  new_node->left = NULL;
  new_node->right = NULL;

  return new_node;
}