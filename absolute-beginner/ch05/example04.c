#include <stdio.h>
#include <stdlib.h>

int getSecondNumber(); // Function prototype

int main(int argc, char const* argv[]) {
   int iNum1 = 0;

   printf("\nEnter a number: ");
   scanf("%d", &iNum1);

   printf("\nYou entered %d and %d\n\n", iNum1, getSecondNumber());
   return 0;
}

// Function definition
int getSecondNumber() {
   int iNum1;

   printf("Enter a second number: ");
   scanf("%d", &iNum1);

   return iNum1;
}