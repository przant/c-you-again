#include <stdio.h>
#include <string.h>

int main( int argc, char const *argv[] ) {
   char str1[11];
   char *str2 = "C language";

   printf( "\nString 1 now contains %s\n", strcpy( str1, str2 ) );

   return 0;
}
