#include <stdio.h>
#include "example04_profit.h"

int main( int argc, char const *argv[] ) {
   float price, totalCost, quantity;

   printf( "\nThe Profit Program\n\n" );
   printf( "\nEnter unit price: " );
   scanf( "%f", &price );

   printf( "Enter quantity sold: " );
   scanf( "%f", &quantity );

   printf( "Enter total cost: " );
   scanf( "%f", &totalCost );

   profit( price, quantity, totalCost );

   return 0;
}
