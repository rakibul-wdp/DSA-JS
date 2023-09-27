#define STACK_MAX 100

typedef struct {
  int top;
  int data[STACK_MAX];
} Stack;

void push(Stack *s, int item) {
  if (s->top < STACK_MAX) {
    s->data[s->top] = item;
    s->top = s->top + 1;
  } else {
    printf("Stack is full!\n");
  }
}

int pop(Stack *s) {
  int item;

  if (s->top == 0) {
    printf("Stack is empty!\n");
    return -1;
  } else {
    s->top = s->top - 1;
    item = s->data[s->top];
  }

  return item;
}