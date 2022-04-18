#include <stdio.h>
#include <stdlib.h>

int main( int argc, char const *argv[] ) {
   char *name = NULL;

   name = ( char * )malloc( 80 + sizeof( char ) );

   if ( name == NULL ) {
      printf( "\nOut of memory!\n\n" );
   } else {
      printf( "\nMemory allocated.\n\n" );
   }

   free( name );

   return 0;
} // End main