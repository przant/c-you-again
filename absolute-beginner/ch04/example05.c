#include <stdio.h>

int main(int argc, char const* argv[]) {
   int x = 1;
   int y = 2;

   x = y * x + 1; // Arithmetic performed before assignment
   printf("\nThe value of x is: %d\n", x);

   x = 1;
   y = 2;

   x -= y * x + 1; // Arithmetic operations performed before assigment
   printf("The value of x is: %d\n", x);

   return 0;
} // end main function
