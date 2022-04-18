#include <stdio.h>
#include <string.h>

int main( int argc, char const *argv[] ) {
   typedef struct player {
      char name[15];
      float score;
   } p;

   p aPlayer = { 0,0 };    // Create instance of structure
   p *ptrPlayer;           // Create a pointer of structure type

   ptrPlayer = &aPlayer; // Assign address to pointer of structure type

   strcpy( ptrPlayer->name, "Pinball Wizard" );
   ptrPlayer->score = 1000000.00;

   printf( "\nPlayer: %s", ptrPlayer->name );
   printf( "\nScore : $%.2f\n\n", ptrPlayer->score );

   return 0;
} // End main function