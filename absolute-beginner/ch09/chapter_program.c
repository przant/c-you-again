#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Define new data type
typedef struct deck {
   char type[10];
   char used;
   int value;
} aDeck;  // End type

// Function prototype
void shuffle( aDeck * );

int main( int argc, char const *argv[] ) {
   int x, y;

   aDeck myDeck[52];

   srand( time( NULL ) );

   // Initialaze structure array
   for ( x = 0; x <= 3; x++ ) {
      for ( y = 0; y < 13; y++ ) {
         switch ( x ) {
            case 0:
               strcpy( myDeck[y].type, "diamonds" );
               myDeck[y].value = y;
               myDeck[y].used = 'n';
               break;

            case 1:
               strcpy( myDeck[y + 13].type, "clubs" );
               myDeck[y + 13].value = y;
               myDeck[y + 13].used = 'n';
               break;

            case 2:
               strcpy( myDeck[y + 26].type, "hearts" );
               myDeck[y + 26].value = y;
               myDeck[y + 26].used = 'n';
               break;

            case 3:
               strcpy( myDeck[y + 39].type, "spades" );
               myDeck[y + 39].value = y;
               myDeck[y + 39].used = 'n';
               break;
         } // End switch
      } // End inner loop
   } // End outer loop

   shuffle( myDeck );

   return 0;
}

void shuffle( aDeck *thisDeck ) {
   int x;
   int iRand;
   int found = 0;

   system( "clear" );
   printf( "\nYour five cards are: \n\n" );

   while ( found < 5 ) {
      iRand = rand() % 52;

      if ( thisDeck[iRand].used == 'n' ) {
         switch ( thisDeck[iRand].value ) {
            case 12:
               printf( "Ace of %s\n", thisDeck[iRand].type );
               break;

            case 11:
               printf( "King of %s\n", thisDeck[iRand].type );
               break;

            case 10:
               printf( "Queen of %s\n", thisDeck[iRand].type );
               break;

            case 9:
               printf( "Jack of %s\n", thisDeck[iRand].type );
               break;

            default:
               printf( "%d of ", thisDeck[iRand].value + 2 );
               printf( "%s\n", thisDeck[iRand].type );
               break;
         } // End switch

         thisDeck[iRand].used = 'y';
         found = found + 1;
      } // End if
   } // End while loop
} // end shuffle
