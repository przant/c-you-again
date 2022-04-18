#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const* argv[]) {
   char cYesNo = '\0';

   int iResponse1 = 0;
   int iResponse2 = 0;
   int iResponse3 = 0;

   int iElapsedTime = 0;
   int iCurrentTime = 0;
   int iRandomNumber = 0;

   int iNumber1 = 0;
   int iNumber2 = 0;
   int iNumber3 = 0;

   int iCounter = 0;

   srand(time(NULL));

   printf("\nPlay a game of Concentration? (y or n): ");
   scanf("%c", &cYesNo);

   if ( cYesNo == 'y' || cYesNo == 'Y' ) {
      iNumber1 = rand() % 100;
      iNumber2 = rand() % 100;
      iNumber3 = rand() % 100;

      printf("\nConcentrate on the next three numbers\n");
      printf("\n%d\t%d\t%d\t\n", iNumber1, iNumber2, iNumber3);

      iCurrentTime = time(NULL);

      do {
         iElapsedTime = time(NULL);
      } while ( ( iElapsedTime - iCurrentTime ) < 3 ); // End do-while loop

      system("clear");

      printf("\nEnter each # separaetd with one space: ");
      scanf("%d%d%d", &iResponse1, &iResponse2, &iResponse3);

      if ( iResponse1 == iNumber1 && iResponse2 == iNumber2 && iResponse3 == iNumber3 ) {
         printf("\nCongratulations!!!\n");
      } else {
         printf("\nSorry, correct numbers were %2d %2d %2d\n", iNumber1, iNumber2, iNumber3);
      }
   }

   return 0;
} // end main function
