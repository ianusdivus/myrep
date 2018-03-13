#include <stdio.h>
#include <stdlib.h>
//------------------ function declaration area --------------

// print function f(xy)= 2*x+y
int printvariables (int x, int y) {
  printf ("f(%d,%d) is %d\n", x, y, 2*x+y);
  return 0;
    }

//------------------ main function beginning here-------------

int main (void) {
  printvariables (3, 4);
  return EXIT_SUCCESS;
}
