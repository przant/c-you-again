#include <stdio.h>

int addTwoNumbers(int, int); // Function prototype

int main(int argc, char const* argv[]) {
   int iResult = 0;

   iResult = addTwoNumbers(5, 5); // Function call

   printf("The returned value from function call addTwoNumbers(5,5) is %d\n", iResult);

   return 0;
}


// Function definition
int addTwoNumbers(int operand1, int operand2) {
   return operand1 + operand2;
}