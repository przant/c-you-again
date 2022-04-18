#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function prototype
void checkAnswer( char *, char[] );

int main( int argc, char const *argv[] ) {
   char *strGame[5] = {
      "ADELANGUAGEFERVZOPIBMOU",
      "ZBPOINTERSKLMLOOPMNOCOT",
      "PODSTRINGGDIWHIEEICERLS",
      "YVCPROGRAMMERWQKNULTHMD",
      "UKUNIXFIMWXIZEQZINPUTEX"
   };

   char answer[80] = { '\0' };

   int displayed = 0;
   int x;
   int startTime = 0;

   system( "clear" );
   printf( "\n\n\tWord Finder\n\n" );

   startTime = time( NULL );

   for ( x = 0; x < 5; x++ ) {
      /* DISPLAY TEST FOR A FEW SECONDS */
      while ( startTime + 3 > time( NULL ) ) {
         if ( displayed == 0 ) {
            printf( "\nFind a word in:\n\n" );
            printf( "%s\n\n", strGame[x] );
            displayed = 1;
         } // End if
      } // End while loop

      system( "clear" );
      printf( "\nEnter word found: \n" );
      fgets( answer, 80, stdin );

      checkAnswer( strGame[x], answer );

      displayed = 0;
      startTime = time( NULL );
   } // End for loop

   return 0;
} // End main

void checkAnswer( char *string1, char string2[] ) {
   int x;

   /* Delete newline character from user input, replacing it with a null character */
   /* Convert answer to UPPER CASE to perform a valid comparison */
   for ( x = 0; x <= strlen( string2 ); x++ ) {
      if ( string2[x] == '\n' ) {
         string2[x] = '\0';
      }

      string2[x] = toupper( string2[x] );
   }

   if ( strstr( string1, string2 ) != 0 && string2[0] != 0 ) {
      printf( "\nGreat Job!\n" );
   } else {
      printf( "\nSorry, word not found!\n" );
   }
} // End checkAnswer