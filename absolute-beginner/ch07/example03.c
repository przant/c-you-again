#include <stdio.h>

int addTwoNumbers(int, int);

int main(int argc, char const* argv[]) {
   int x = 0;
   int y = 0;

   printf("\nEnter first number: ");
   scanf("%d", &x);

   printf("\nEnter second number: ");
   scanf("%d", &y);

   printf("\nResult is %d\n", addTwoNumbers(x, y));

   return 0;
} // End main


int addTwoNumbers(int num1, int num2) {
   return num1 + num2;
}