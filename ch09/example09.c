#include <stdio.h>

int main( int argc, char const *argv[] ) {
   int x = 12;
   int y = 5;

   printf( "\nWithout Type-Casting\n" );
   printf( "12 \\ 15 = %.2f\n\n", x / y );

   printf( "\nWith Type-Casting\n" );
   printf( "12 \\ 15 = %.2f\n\n", ( float )x / ( float )y );

   return 0;
} // End main
