#include <stdio.h>
#include <string.h>

int main( int argc, char const *argv[] ) {
   char *str1 = "Analyzing strings with the strstr() fucntion";
   char *str2 = "ing";
   char *str3 = "xyz";

   printf( "\nstr1 = %s\n", str1 );
   printf( "str2 = %s\n", str2 );
   printf( "str3 = %s\n", str3 );

   if ( strstr( str1, str2 ) != NULL ) {
      printf( "\nstr2 was found in str1\n" );
   } else {
      printf( "\nstr2 was not found in str1\n" );
   }

   if ( strstr( str1, str3 ) != NULL ) {
      printf( "\nstr3 was found in str1\n" );
   } else {
      printf( "\nstr3 was not found in str1\n" );
   }


   return 0;
} // End main
