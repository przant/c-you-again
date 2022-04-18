#include <stdio.h>

int main(int argc, char const *argv[]) {
   int iA = 0, iB = 0, iX = 0, iY = 0;

   iA = 5, iB = 1, iX = 10, iY = 5;

   printf("Program to evaluate the formula (a - b)*(x - y)\n\n");

   printf("Result of (%d - %d)(%d - %d) is %d\n",
          iA, iB, iX, iY, (iA - iB) * (iX - iY));

   return 0;
}
