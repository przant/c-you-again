#include <stdio.h>

int main( int argc , char const *argv[] ) {
   char *strNames[5] = { 0 };
   char answer[81] = { 0 };

   int x;

   strNames[0] = "Antonio";
   strNames[1] = "Plutarco";
   strNames[2] = "Enrique";
   strNames[3] = "Rodrigo";
   strNames[4] = "Santiago";

   printf( "\nNames in pointer array of type char: \n\n" );

   for ( x = 0; x < 5; x++ ) {
      printf( "%s\n" , strNames[x] );
   }

   printf( "\n" );

   return 0;
} // End main
