#include <stdio.h>

int main(int argc, char const *argv[]) {
   int iA = 0, iB = 0, iX = 0, iY = 0, iResult = 0;

   printf("Program to evaluate the formula (a - b)*(x - y)\n\n");

   printf("Enter a value: ");
   scanf("%d", &iA);

   printf("Enter b value: ");
   scanf("%d", &iB);

   printf("Enter x value: ");
   scanf("%d", &iX);

   printf("Enter y value: ");
   scanf("%d", &iY);

   iResult = (iA - iB) * (iX - iY);

   printf("The result is %d\n", iResult);

   return 0;
}
