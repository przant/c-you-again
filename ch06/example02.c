#include <stdio.h>

int main(int argc, char const* argv[]) {
   int x = 0;
   int iIndex = -1;
   int iArray[5] = { 0 };

   for ( x = 0; x < 5; x++ ) {
      iArray[x] = ( x + 5 );
   }

   do {
      printf("\nEnter a valid index (0-4): ");
      scanf("%d", &iIndex);
   } while ( iIndex < 0 || iIndex > 4 );

   printf("\nThe value of index %d is %d\n", iIndex, iArray[iIndex]);


   return 0;
}
