#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *create_node(int data) {
  struct node *new_node = malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

void insert_node(struct node **head, int data) {
  struct node *new_node = create_node(data);
  struct node *current = *head;

  if (current == NULL) {
    *head = new_node;
  } else {
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = new_node;
  }
}

void print_list(struct node *head) {
  struct node *current = head;

  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

int main() {
  struct node *head = NULL;

  insert_node(&head, 1);
  insert_node(&head, 2);
  insert_node(&head, 3);
  insert_node(&head, 4);

  print_list(head);

  return 0;
}