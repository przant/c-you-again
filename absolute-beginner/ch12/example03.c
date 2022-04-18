#include <stdio.h>
#define RESULT(x, y) (printf("\nResult is %d\n\n", x+y))

int main( int argc, char const *argv[] ) {
   int num1 = 0;
   int num2 = 0;

   printf( "\nEnter first number: " );
   scanf( "%d", &num1 );

   printf( "Enter second number: " );
   scanf( "%d", &num2 );

   RESULT( num1, num2 );

   return 0;
}
