#include <stdio.h>

int main( int argc, char const *argv[] ) {
   FILE *pRead;

   // Open a stream to file in read mode
   pRead = fopen( "file1.dat", "r" );

   if ( pRead ) {
      printf( "\nFile opened for reading\n\n" );
   } else {
      printf( "\nFile cannot be opened\n\n" );
   }

   // Close stream to file
   fclose( pRead );

   return 0;
} // End main
