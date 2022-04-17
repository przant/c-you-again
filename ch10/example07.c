#include <stdio.h>
#include <stdlib.h>

int main( int argc, char const *argv[] ) {
   int *numbers;

   numbers = ( int * )calloc( 10, sizeof( int ) );

   if ( numbers == NULL ) {
      printf( "\nError trying allocate memory!\n\n" );
   } else {
      printf( "\nSuccessful memory allocation!\n\n" );
   }

   free( numbers );

   return 0;
}
