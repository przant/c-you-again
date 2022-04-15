#include <stdio.h>
#include <string.h>

int main( int argc , char const *argv[] ) {
   char *str1 = "Antonio";
   char str2[] = "Perez";

   printf( "\nThe length of string 1 is: %lu\n" , strlen( str1 ) );
   printf( "The length of string 2 is: %lu\n" , strlen( str2 ) );

   return 0;
} // End main
