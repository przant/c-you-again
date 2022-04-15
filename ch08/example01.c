#include <stdio.h>

int main( int argc , char const *argv [] ) {
   char *myString = "Antonio";
   int x;

   printf( "\nThe pointer variable's value is: %p\n" , myString );
   printf( "\nThe pointer variable points to: %s\n" , myString );
   printf( "\nThe memory locations for each character are: \n\n" );

   // Access & print each memory address in hexadecimal format
   for ( x = 0; x < 8; x++ ) {
      printf( "%p\n" , &myString[x] );
   }

   return 0;
} // End main
