#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Function prototypes
void convertL( char * );
void convertU( char * );

int main( int argc , char const *argv[] ) {
   char name1[] = "Antonio";
   char name2[] = "Perez";

   convertL( name1 );
   convertU( name2 );

   printf( "\n" );

   return 0;
} // End main


// Function definitions
void convertL( char *str ) {
   int x;

   for ( x = 0; x <= strlen( str ); x++ ) {
      str[x] = tolower( str[x] );
   }

   printf( "\nFirst name converted to lower case is %s\n" , str );
} // End convertL

void convertU( char *str ) {
   int x;

   for ( x = 0; x <= strlen( str ); x++ ) {
      str[x] = toupper( str[x] );
   }

   printf( "\nLast name converted to upper case is %s\n" , str );

} // End convertU