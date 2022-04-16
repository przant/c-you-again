#include <stdio.h>

int main(int argc, char const* argv[]) {
   int x = 0;
   int y = 1;

   x = y++ * 2; // Increments y after the assignment
   printf("\nThe value of x is: %d\n", x);

   x = 0;
   y = 1;


   x = ++y * 2; //Increments y beofe the asignment
   printf("\nThe value of x is: %d\n", x);

   return 0;
} // end main function
