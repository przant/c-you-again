#include <stdio.h>

int main( int argc, char const *argv[] ) {
   FILE *pWrite;
   char fName[20];
   char lName[20];
   char id[15];
   float gpa;

   pWrite = fopen( "students.dat", "w" );

   if ( pWrite == NULL ) {
      printf( "\nFile not opened\n" );
   } else {
      printf( "\nEnter first name, last name, id anbd GPA\n\n" );
      printf( "Enter data separated by spaces: " );

      // Store data entered by the user into variables
      scanf( "%s%s%s%f", fName, lName, id, &gpa );

      // Write variable contents separated by tabs
      fprintf( pWrite, "%s\t%s\t%s\t%.2f\n", fName, lName, id, gpa );

      fclose( pWrite );
   } // End if-else

   return 0;
} // End main
