#include <stdio.h>

int main( int argc, char const *argv[] ) {
   int array[10];

   printf( "\nSize of array: %lu bytes", sizeof( array ) );
   printf( "\nNumber of elements in array: " );
   printf( "%lu\n\n", sizeof( array ) / sizeof( int ) );

   return 0;
} // End main
