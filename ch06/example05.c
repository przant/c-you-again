#include <stdio.h>

int main(int argc, char const* argv[]) {
   int iTwoD[3][3];
   int x, y;

   for ( x = 0; x <= 2; x++ ) {
      for ( y = 0; y <= 2; y++ ) {
         iTwoD[x][y] = ( x + y );
      }
   } // End outer loop

   // Print the 2-d array
   for ( x = 0; x <= 2; x++ ) {
      for ( y = 0; y <= 2; y++ ) {
         printf("iTwoD[%d][%d] = %d\n", x, y, iTwoD[x][y]);
      }
   } // End outer loop

   return 0;
} // End outer loop
