#include <stdio.h>
#include <stdlib.h>

int addTwoNumbers(int, int); // Function prototype

int main(int argc, char const* argv[]) {
   int iNum1 = 0, iNum2 = 0;

   printf("\nEnter the first number: ");
   scanf("%d", &iNum1);

   printf("\nEnter the second number: ");
   scanf("%d", &iNum2);

   printf("The result is %d\n\n", addTwoNumbers(iNum1, iNum2));

   return 0;
}

// Function definition
int addTwoNumbers(int operand1, int operand2) {
   return operand1 + operand2;
}