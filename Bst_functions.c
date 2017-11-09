#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "Bst_Node.h"

//this method adds a node to the binary search tree getting
//the root and checking if the tree is empty and then adding
//name in the appropriate spot
Node *add_Name(Node *root,char *name){
  int cmp;
  char *copy = malloc(1+strlen(name));
  strcpy(copy,name);
  if(root == NULL){
    root = (Node *)malloc(sizeof(Node));
    root->name = copy;
    root->left = NULL;
    root->right = NULL;
    return root;
  }
  //cmp variable holds the value of the names compared to the one in the root
  cmp = strcmp(name, root->name);
  if(cmp < 0){
    
    root->left = add_Name(root->left, copy);
    return root;
  }
  else if(cmp > 0){
    root->right = add_Name(root->right, copy);
    return root;
  }
  else{
    printf("This name is already in the file");
    return root;
  }
}

//i did not do the delete name method
Node *delete_Name(){}

//prints the binary search tree in order
void *print_Bst(Node *root){
  if(root != NULL){
    print_Bst(root->left);
    printf("%s\n", root->name);
    print_Bst(root->right);
  }
}
//prints the binary search tree in pre-order
void *print_preOrder(Node *root){
  if(root != NULL){
    printf("%s\n", root->name);
    print_preOrder(root->left);
    print_Bst(root->right);
  }
}
