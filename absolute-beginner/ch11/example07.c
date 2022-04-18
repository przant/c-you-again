#include <stdio.h>
#include <stdlib.h>

int main( int argc, char const *argv[] ) {
   FILE *pRead;
   char name[10];
   char hobby[15];

   pRead = fopen( "hobbies2.dat", "r" );

   if ( pRead == NULL ) {
      goto ErrorHandler;
   } else {
      printf( "\nName\tHobby\n\n" );
      fscanf( pRead, "%s %s", name, hobby );

      while ( !feof( pRead ) ) {
         printf( "%s\t%s\n", name, hobby );
         fscanf( pRead, "%s %s", name, hobby );
      } // End while loop
   } // End if-else

   fclose( pRead );

   exit( EXIT_SUCCESS ); // exit program normally

ErrorHandler:
   fclose( pRead );
   perror( "The following error ocurred" );
   exit( EXIT_FAILURE ); // Exit program with error

   return 0;
} // End main
