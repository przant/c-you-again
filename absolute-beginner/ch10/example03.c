#include <stdio.h>
#include <stdlib.h>

int main( int argc, char const *argv[] ) {
   char *name;
   name = ( char * )malloc( 80 * sizeof( char ) );

   free( name );

   return 0;
} // End main
