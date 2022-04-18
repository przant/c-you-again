#include <stdio.h>

void printArray(const int[]);

int main(int argc, char const* argv[]) {
   int iNumbers[3] = { 2,4,6 };

   printArray(iNumbers);

   return 0;
} // End main

void printArray(const int num[]) { // Pass by reference, but read-only
   int x;

   printf("\nArray contents are: ");

   for ( x = 0; x < 3; x++ ) {
      printf("%d ", num[x]);
   }

   printf("\n");
}
