#include <stdio.h>

int main(int argc, char const* argv[]) {
   int x;
   int iValue;
   int iFound = -1;
   int iArray[5] = { 0 };

   for ( x = 0; x < 5; x++ ) {
      iArray[x] = ( x + x );
   }

   printf("\nEnter value to search for: ");
   scanf("%d", &iValue);


   for ( x = 0; x < 5; x++ ) {
      if ( iArray[x] == iValue ) {
         iFound = x;
         break;
      }
   } // End for loop

   if ( iFound > -1 ) {
      printf("\nI found your search value in element %d\n\n", iFound);
   } else {
      printf("\nSorry, yopur search value was not found\n\n");
   }

   return 0;
} // End main
