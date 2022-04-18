#include <stdio.h>

int main( int argc, char const *argv[] ) {
   FILE *pRead;
   char name[10];
   char hobby[15];

   pRead = fopen( "hobbies.dat", "r" );

   if ( pRead == NULL ) {
      printf( "\nFile cannot be opened!\n " );
   } else {
      printf( "\nName\tHobbie\n\n" );
      fscanf( pRead, "%s%s", name, hobby );

      while ( !feof( pRead ) ) {
         printf( "%s\t%s\n", name, hobby );
         fscanf( pRead, "%15s%s", name, hobby );
      } // end while loop

      printf( "\n" );
   }

   fclose( pRead );

   return 0;
} // End main
