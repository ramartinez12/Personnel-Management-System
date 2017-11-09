#include <stdio.h>
#include <stdlib.h>

//the header file that holds the signatures of the methods used

//the construct of the Node that hold the name of the employees
typedef struct Node{
  char *name;
  struct Node *left;
  struct Node *right;
} Node;

Node *add_Name (Node *root, char *name);

Node *delete_Name();

void *print_Bst(Node *root);

void *print_preOrder(Node *root);
