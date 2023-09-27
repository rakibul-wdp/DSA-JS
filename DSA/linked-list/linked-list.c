#include <stdio.h>

struct node {
  int data;
  struct node *next;
};

typedef struct node Node;

struct node {
  int data;
  Node *next;
};