#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const* argv[]) {
   int x = 0;
   int iArray[5];

   // Initialize array elements
   for ( x = 0; x < 5; x++ ) {
      iArray[x] = x;
   }

   // Print array element contents
   for ( x = 0; x < 5; x++ ) {
      printf("\nThe value of iArray index %d is %d\n", x, iArray[x]);
   }

   printf("\n");


   return 0;
}
