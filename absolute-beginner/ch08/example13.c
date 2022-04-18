#include <stdio.h>
#include <string.h>

int main( int argc, char const *argv[] ) {
   char *str1 = "A";
   char *str2 = "A";
   char *str3 = "!";

   printf( "\nstr1 = %s\n", str1 );
   printf( "str2 = %s\n", str2 );
   printf( "str3 = %s\n", str3 );

   printf( "\nstrcmp(str1, str2) = %d\n", strcmp( str1, str2 ) );
   printf( "strcmp(str1, str3) = %d\n", strcmp( str1, str3 ) );
   printf( "strcmp(str3, str1) = %d\n\n", strcmp( str3, str1 ) );

   if ( strcmp( str1, str2 ) == 0 ) {
      printf( "Letter A is equal to letter A\n" );
   }

   if ( strcmp( str1, str3 ) > 0 ) {
      printf( "Character A is greater than letter !\n" );
   }

   if ( strcmp( str3, str1 ) < 0 ) {
      printf( "Character ! is less than letter A\n\n" );
   }


   return 0;
} // End main
