#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char const *argv[] ) {
   int response;
   int *answer;
   int *op1;
   int *op2;
   char *result;
   int x;

   srand( time( NULL ) );

   printf( "\nMath Quiz\n\n" );
   printf( "Enter # of problems: " );
   scanf( "%d", &response );

   /* Based on the number of questions the user wishes to take,
      allocate enough memory to hold question data. */
   op1 = ( int * )calloc( response, sizeof( int ) );
   op2 = ( int * )calloc( response, sizeof( int ) );
   answer = ( int * )calloc( response, sizeof( int ) );
   result = ( char * )calloc( response, sizeof( char ) );

   if ( op1 == NULL || op2 == NULL || answer == NULL || result == NULL ) {
      printf( "\nOut of memory!\n\n" );
      return 1;
   } // End if

   // Display random addition problems

   for ( x = 0; x < response; x++ ) {
      op1[x] = rand() % 100;
      op2[x] = rand() % 100;

      printf( "\n%d + %d = ", op1[x], op2[x] );

      scanf( "%d", &answer[x] );

      if ( answer[x] == op1[x] + op2[x] ) {
         result[x] = 'c';
      } else {
         result[x] = 'i';
      }
   } // End for loop

   printf( "\nQuiz Results\n\n" );
   printf( "Question\tYour Answer\tCorrect\n" );

   // print the results of the quiz
   for ( x = 0; x < response; x++ ) {
      if ( result[x] == 'c' ) {
         printf( "%d + %d\t\t\t%d\tYes\n", op1[x], op2[x], answer[x] );
      } else {
         printf( "%d + %d\t\t\t%d\tNo\n", op1[x], op2[x], answer[x] );
      }
   } // End for loop

   // Free memory
   free( op1 );
   free( op2 );
   free( answer );
   free( result );

   return 0;
}
