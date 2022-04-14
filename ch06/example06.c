#include <stdio.h>

int main(int argc, char const* argv[]) {
   int iTwoD[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
   int iFoundAt[2] = { 0,0 };

   int x, y;
   int iValue = 0;
   int iFound = 0;

   printf("\nEnter your search value: ");
   scanf("%d", &iValue);

   // Search the 2-D array
   for ( x = 0; x <= 2; x++ ) {
      for ( y = 0; y <= 2; y++ ) {
         if ( iTwoD[x][y] == iValue ) {
            iFound = 1;
            iFoundAt[0] = x;
            iFoundAt[1] = y;
            break;
         } // End if
      } // End inner loop
   } // End outer loop

   if ( iFound == 1 ) {
      printf("\nFound value in iTwoD[%d][%d]\n", iFoundAt[0], iFoundAt[1]);
   } else {
      printf("\nValue not found\n");
   }

   return 0;
} // End main
