#include <stdio.h>
#include "chapter_program_calculate.h"

int main( int argc, char const *argv[] ) {
   int iSeletion = 0;
   float length, width, height;

   printf( "\nThe Function Wizard\n" );
   printf( "\n1\tDetermine perimeter of a rectangle" );
   printf( "\n2\tDetermine area of a rectangle" );
   printf( "\n3\tDetermine volume of a rectangle" );
   printf( "\nEnter selection: " );
   scanf( "%d", &iSeletion );


   switch ( iSeletion ) {
      case 1:
         printf( "\nEnter length: " );
         scanf( "%f", &length );

         printf( "Enter width: " );
         scanf( "%f", &width );

         perimeter( length, width );
         break;
      case 2:
         printf( "\nEnter length: " );
         scanf( "%f", &length );

         printf( "Enter width: " );
         scanf( "%f", &width );

         area( length, width );
         break;
      case 3:
         printf( "\nEnter length: " );
         scanf( "%f", &length );

         printf( "Enter width: " );
         scanf( "%f", &width );

         printf( "Enter height: " );
         scanf( "%f", &height );

         volume( length, width, height );
         break;
   } // End siwtch

   return 0;
} // End main
