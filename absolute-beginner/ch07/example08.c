#include <stdio.h>

void squareNumbers(int[]);

int main(int argc, char const* argv[]) {
   int x;
   int iNumbers[3] = { 2,4,6 };

   printf("\nThe current arrays values are: ");

   for ( x = 0; x < 3; x++ ) {
      printf("%d ", iNumbers[x]); // Print contents of array
   }

   printf("\n");

   squareNumbers(iNumbers);

   printf("\nThe modified array values are: ");

   for ( x = 0; x < 3; x++ ) {
      printf("%d ", iNumbers[x]); // Print modified array contents
   }


   printf("\n");

   return 0;
} // End main

void squareNumbers(int num[]) {
   int x;

   for ( x = 0; x < 3; x++ ) {
      num[x] = num[x] * num[x]; // Modifiy the array contents
   }

}