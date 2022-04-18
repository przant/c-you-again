#include <stdio.h>
#define AREA(l, w)(l * w)

int main( int argc, char const *argv[] ) {
   int length = 0;
   int width = 0;

   printf( "\nEnter length: " );
   scanf( "%d", &length );

   printf( "Enter width: " );
   scanf( "%d", &width );

   printf( "\nArea of rectangle = %d\n\n", AREA( length, width ) );

   return 0;
}
