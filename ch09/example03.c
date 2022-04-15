#include <stdio.h>
#include <string.h>

typedef struct scores {
   char name[10];
   int score;
} s;

int main( int argc, char const *argv[] ) {
   s highScores[3];
   int x;

   // Assign values to members
   strcpy( highScores[0].name, "Hunter" );
   highScores[0].score = 40768;

   strcpy( highScores[1].name, "Kenya" );
   highScores[1].score = 38565;

   strcpy( highScores[2].name, "Apoloo" );
   highScores[2].score = 35985;

   // Print array content
   printf( "\nTop 3 high Scores\n" );

   for ( x = 0; x < 3; x++ ) {
      printf( "\n%s\t%d\n", highScores[x].name, highScores[x].score );
   }

   printf( "\n\n" );

   return 0;
}
