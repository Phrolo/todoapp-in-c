/*
 * todo.c
 * Author: Michael Anthony Dollentes
 */

#include <stdio.h>
#include <stdlib.h>

/*
* Structure of a task object.
*/

typedef struct TASK_STRUCT {
  char taskHeading[256];
  char* taskDescription;
  int isFinished;
  struct TASK_STRUCT * next;
} task;

// Print the menu and return the option.
int printMenu(){
  int choice = -1;

  printf("[1] Add task.\n");
  printf("[2] View tasks.\n");
  printf("[3] Delete tasks.\n");
  printf("[0] Quit.\n");
  printf("[o] Choice: ");

  scanf("%d", &choice);
  getchar();

  return choice;
}


 /*
  * Main program.
  */
int main(int argc, char *argv[])
{
  int choice = -1;
  task * head = NULL;

  while (choice != 0) {
    choice = printMenu();
  }
  return EXIT_SUCCESS;
}
