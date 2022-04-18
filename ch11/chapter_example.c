#include <stdio.h>
#include <stdlib.h>

int main( int argc, char const *argv[] ) {
   int iResponse = 0;
   char fName[20] = { 0 };
   char lName[20] = { 0 };
   char number[20] = { 0 };

   FILE *pRead = NULL;
   FILE *pWrite = NULL;

   printf( "\n\tPhone Book\n\n" );
   printf( "\n1\tAdd phone book entry" );
   printf( "\n2\tPrint phone book" );
   printf( "\n\nSelect an option: " );
   scanf( "%d", &iResponse );

   if ( iResponse == 1 ) {
      /* User is adding a ner phone book entry - get the info */
      printf( "\nEnter first name: " );
      scanf( "%s", fName );

      printf( "Enter last name: " );
      scanf( "%s", lName );

      printf( "Enter phone number: " );
      scanf( "%s", number );

      pWrite = fopen( "phone_book.dat", "a" );

      if ( pWrite != NULL ) {
         fprintf( pWrite, "%s %s %s\n", fName, lName, number );
         fclose( pWrite );
      } else {
         goto ErrorHandler; // There is a file i/o error
      } // Enfd inner if-else

      printf( "\n" );
   } else if ( iResponse == 2 ) {
      /* User wants to print the phone book */
      pRead = fopen( "phone_book.dat", "r" );

      if ( pRead != NULL ) {
         printf( "\nPhone Book Entries\n" );

         while ( !feof( pRead ) ) {
            fscanf( pRead, "%s %s %s", fName, lName, number );
            if ( !feof( pRead ) ) {
               printf( "\n%s %s %s", fName, lName, number );
            } // End if
         } // End while loop
         printf( "\n\n" );
      } else {
         goto ErrorHandler;
      } // End inner if-else

   } else {
      printf( "\nInvalid selection!\n" );
   }

   fclose( pWrite );
   fclose( pRead );
   exit( EXIT_SUCCESS );

ErrorHandler:
   perror( "The following error ocurred" );
   exit( EXIT_FAILURE ); // Exit program with error

   return 0;
} // End main
