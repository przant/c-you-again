#include <stdio.h>

int main( int argc, char const *argv[] ) {
   int x;
   float f;
   double d;
   char c;

   typedef struct employee {
      int id;
      char *name;
      float salary;
   } e;

   printf( "\nSize of integer: %lu bytes", sizeof( x ) );
   printf( "\nSize of float: %lu bytes", sizeof( f ) );
   printf( "\nSize of double: %lu bytes", sizeof( d ) );
   printf( "\nSize of char: %lu bytes", sizeof( c ) );
   printf( "\nSize of employee structure: %lu bytes\n\n", sizeof( e ) );

   return 0;
} // End main
