#include <stdio.h>
#include <stdlib.h>

int main( int argc, char const *argv[] ) {
   FILE *pRead = NULL;

   char fName[20];
   char lName[20];
   char id[15];
   float gpa;

   pRead = fopen( "students.dat", "r" );

   if ( pRead == NULL ) {
      printf( "\nFile not opened!\n\n" );
   } else {
      // Print heading
      printf( "\nName\t\tID\t\tGPA\n\n" );

      // Read file information from data file and store in variables
      fscanf( pRead, "%s%s%s%f", fName, lName, id, &gpa );

      // Printf variable data to standard output
      printf( "%s %s\t%s\t%.2f\n\n", fName, lName, id, gpa );
   } // End if-else

   fclose( pRead );

   return 0;
} // End main
