#include <stdio.h>
#include <string.h>

int main( int argc, char const *argv[] ) {
   char str1[40] = "Computer Science ";
   char str2[] = "is applied mathematics";

   printf( "\n%s\n", strcat( str1, str2 ) );

   return 0;
} // End main
