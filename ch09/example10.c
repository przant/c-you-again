#include <stdio.h>

int main( int argc, char const *argv[] ) {
   int number = 86;
   char letter = 'M';

   printf( "\n86 type-casted to char is: %c", ( char )number );
   printf( "\n'M' type-casted to int is: %d\n\n", ( int )letter );

   return 0;
} // End main
