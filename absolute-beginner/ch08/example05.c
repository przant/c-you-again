#include <stdio.h>

int main( int argc , char const *argv [] ) {
   char *colors[3][10] = { NULL };

   printf( "\nEnter 3 colors separated by a spaces: " );
   scanf( "%s %s %s" , colors[0] , colors[1] , colors[2] );

   printf( "\nYour entered: " );
   printf( "%s %s %s\n\n" , colors[0] , colors[1] , colors[2] );

   return 0;
} // End main
