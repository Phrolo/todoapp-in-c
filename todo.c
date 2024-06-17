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


 /*
  * Main program.
  */
int main(int argc, char *argv[])
{
  int choice = -1;
  task * head = NULL;

  return EXIT_SUCCESS;
}
