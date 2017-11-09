#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Bst_Node.h"

//the main file, the main file holds the user interface on
//what the user wants to do in the program

int main(){
  Node *root = NULL;
  char c;
  char cont = 'y';
  int response = 0;
  char answer[100];
  //the while loop will continue printing out asking the user what he wants to do next
  printf("\n   This is a New Personnel Management System by ACME Solutions\n");
  while(response == 0){
  printf("\n   Please type the letter of the command you wish to complete:\n");
  printf("----------------------------------------------------------------\n");
  printf("   1) Add a new employee name\n");
  printf("   2) Remove an employee name\n");
  printf("   3) List all employee name\n");
  scanf("%c",&c);
  if(c == '1'){
    printf("   Add a new employee name\n");
    scanf("%s", &answer);
    root = add_Name(root,answer);
    scanf("%c",&cont);
    if(cont == 'y'){
      response = 0;
    } else if(cont == 'n'){
      printf("end");
      response = 1;
    }
  } else if(c == '2'){
    printf("   Remove an employee name\n");
    response = 1;
  } else if(c == '3'){
    printf("   List all employee names\n");
    print_Bst(root);
    response = 1;
  } else{
    printf("   Not a valid option\n please enter a valid option\n");
  }
  }
  return 0;
}
