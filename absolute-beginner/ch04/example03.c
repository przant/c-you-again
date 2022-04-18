#include <stdio.h>

int main(int argc, char const* argv[]) {
   int x = 1;
   int y = 1;

   x = y-- * 4;
   printf("\nThe value of x is %d\n", x);

   y = 1; // reset the variable value for demostration purposes

   x = +--y * 4;
   printf("\nThe value of x is %d\n", x);

   return 0;
}
