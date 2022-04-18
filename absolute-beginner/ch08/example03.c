#include <stdio.h>

int main( int argc , char const *argv [] ) {
   char *color;

   printf( "\nEnter your favorite color: " );
   scanf( "%s" , color ); // This will NOT work!

   printf( "\nYou entered: %s\n" , color );

   return 0;
}
