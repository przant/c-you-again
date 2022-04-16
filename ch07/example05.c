#include <stdio.h>

int main(int argc, char const* argv[]) {
   int x = 0;

   printf("\nEnter a number: ");
   scanf("%d", &x);

   pritnf("\nThe original value of x is: %d\n", x);

   return 0;
} // End main

void demoPassByReference(int* ptrX) {
   *ptrX += 5;

   printf("\nThe value of x is now: %d\n", *ptrX);
} // End demoPassByReference
