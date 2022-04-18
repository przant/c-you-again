#include <stdio.h>
#include <stdlib.h>

void readData( void );

int main( int argc, char const *argv[] ) {
   FILE *pWrite;
   char name[10];
   char hobby[15];

   printf( "\nCurrent file contents:\n" );

   readData();

   printf( "\nEnter a new name and hobby: " );
   scanf( "%s %s", name, hobby );

   // Opena data file for append
   pWrite = fopen( "hobbies.dat", "a" );

   if ( pWrite == NULL ) {
      printf( "\nFile cannot be opened!\n\n" );
   } else {
      // Append record information to data file
      fprintf( pWrite, "%s %s\n", name, hobby );
      fclose( pWrite );

      // Read data again with new record information appended
      readData();
   } // End if-else

   fclose( pWrite );

   return 0;
} // End main

void readData() {
   FILE *pRead;

   char name[10];
   char hobby[15];

   // Open data file for read access only
   pRead = fopen( "hobbies.dat", "r" );

   if ( pRead == NULL ) {
      printf( "\nFile cannot be opened!\n\n" );
   } else {
      printf( "\nName\tHobby\n\n" );
      fscanf( pRead, "%s%s", name, hobby );

      // Read records from data file until end of file is reached
      while ( !feof( pRead ) ) {
         printf( "%s\t%s\n", name, hobby );
         fscanf( pRead, "%s%s", name, hobby );
      } // End loop
   } // End if-else

   printf( "\n" );

   fclose( pRead );

} // End readData function