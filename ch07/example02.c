#include <stdio.h>

int main(int argc, char const* argv[]) {
   int x = 5;
   int y = 10;
   int* iPtr = NULL;

   printf("\niPtr points to: %p\n", iPtr);

   // Assign memory address of y to pointer
   iPtr = &y;
   printf("\niPtr now points to: %p\n", iPtr);

   // Change the value of x to the value of y
   x = *iPtr;
   printf("\nThe value of x is now: %d\n", x);

   // Change the value of y to 15
   *iPtr = 15;

   printf("\nThe value of y is now: %d\n", y);

   return 0;
}
