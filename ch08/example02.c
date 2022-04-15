#include <stdio.h>

int main( int argc , char const *argv [] ) {
   char color[12] = { '\0' };

   printf( "Enter your favorite color: " );
   scanf( "%s" , color );

   printf( "\nYou entered: %s\n" , color );

   return 0;
} // End main

