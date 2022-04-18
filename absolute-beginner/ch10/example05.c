#include <stdio.h>
#include <stdlib.h>

int main( int argc, char const *argv[] ) {
   char *name;

   name = ( char * )malloc( 80 * sizeof( char ) );

   if ( name != NULL ) {
      printf( "\nEnter your name: " );
      fgets( name, 80, stdin );

      printf( "\nHi %s\n\n", name );

      free( name ); // Free memory resources
   } // End if

   return 0;
} // End main
