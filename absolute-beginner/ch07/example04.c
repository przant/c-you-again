#include <stdio.h>

int main(int argc, char const* argv[]) {
   int x = 0;

   printf("\nEnter a number: ");
   scanf("%d", &x);

   demoPassByValue(x);

   printf("\nThe original value of x did not change: %d\n", x);

   return 0;
} // End main function


void demoPassByValue(int x) {
   printf("\nThe value of x is: %d\n", x);
} // End demoPassByValue