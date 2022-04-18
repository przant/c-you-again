#include <stdio.h>

int main( int argc, char const *argv[] ) {
   FILE *pRead = NULL;
   char name[10];

   pRead = fopen( "names.dat", "r" );

   if ( pRead ) {
      printf( "\nContents of names.dat\n\n" );
      fscanf( pRead, "%s", name );

      while ( !feof( pRead ) ) {
         printf( "%s\n", name );
         fscanf( pRead, "%s", name );
      } // End while loop

      printf( "\n" );
   } else {
      printf( "\nFile cannot be opened\n\n" );
   } // End if-else

   fclose( pRead );

   return 0;
} // End main
