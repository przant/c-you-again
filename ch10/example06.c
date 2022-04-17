#include <stdio.h>
#include <stdlib.h>

int main( int argc, char const *argv[] ) {
   int *numbers;
   int x;

   numbers = ( int * )malloc( 5 * sizeof( int ) );

   if ( numbers == NULL ) {
      return 1; // Return if malloc is not successuful
   }

   numbers[0] = 100;
   numbers[1] = 200;
   numbers[2] = 300;
   numbers[3] = 400;
   numbers[4] = 500;

   printf( "\nIndividual memory segments initialized to:\n\n" );

   for ( x = 0; x < 5; x++ ) {
      printf( "numbers[%d] = %d\n", x, numbers[x] );
   }

   printf( "\n" );

   free( numbers );

   return 0;
} // End main
