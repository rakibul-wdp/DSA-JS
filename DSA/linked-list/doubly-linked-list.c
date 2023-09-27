#include <stdio.h>

typedef struct node Node;

struct node {
  int data;
  Node *next;
  Node *prev;
};

Node *create_node(int item, Node *next, Node *prev) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (new_node == NULL) {
    printf("Error! Could Not Create A New Node\n");
    exit(1);
  }

  new_node->data = item;
  new_node->next = next;
  new_node->prev = prev;

  return new_node;
}