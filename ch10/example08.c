#include <stdio.h>
#include <stdlib.h>

int main( int argc, char const *argv[] ) {
   int *number;
   int *newNumber;
   int x;

   number = ( int * )malloc( sizeof( int ) * 5 );

   if ( number == NULL ) {
      printf( "\nOut of memory!\n" );
      return 1;
   }

   printf( "\nOriginal memory:\n\n" );

   for ( x = 0; x < 5; x++ ) {
      number[x] = x * 100;
      printf( "number[%d] = %3d\n", x, number[x] );
   } // End for loop

   newNumber = ( int * )realloc( number, 10 * sizeof( int ) );

   if ( newNumber == NULL ) {
      printf( "\nOut of memory!\n" );
      return 1;
   }

   number = newNumber;

   // Initialize new memory only
   for ( x = 5; x < 10; x++ ) {
      number[x] = x * 100;
   } // End for loop

   printf( "\nExapnded memory:\n" );

   for ( x = 0; x < 10; x++ ) {
      printf( "number[%d] = %3d\n", x, number[x] );
   }

   printf( "\n" );

   // free(memory)
   free( number );

   return 0;
} // End main
