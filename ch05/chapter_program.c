#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*************************************************
FUNCTION PROTOTYPES
*************************************************/
int sportsQuestion(void);
int geographyQuestion(void);
void pause(int);
/************************************************/

/*************************************************
GLOBAL VARIABLE
*************************************************/
int giResponse = 0;
/************************************************/

int main(int argc, char const* argv[]) {
   do {
      system("clear");
      printf("\n\tTHE TRIVIA GAME\n\n");
      printf("1\tSports\n");
      printf("2\tGeography\n");
      printf("3\tQuit\n");
      printf("\n\nEnter your selection: ");
      scanf("%d", &giResponse);

      switch ( giResponse ) {
         case 1:
            if ( sportsQuestion() == 4 ) {
               printf("\nCorrect!\n");
            } else {
               printf("\nIncorrect!\n");
            }
            pause(2);
            break;

         case 2:
            if ( geographyQuestion() == 2 ) {
               printf("\nCorrect!\n");
            } else {
               printf("\nIncorrect!\n");
            }
            pause(2);
            break;
      } // End switch

   } while ( giResponse != 3 );

   return 0;
}

/*************************************************
FUNCTION DEFINITION
*************************************************/
int sportsQuestion(void) {
   int iAnswer = 0;

   system("clear");
   printf("\tSports Question\n");
   printf("\nWhat university did NFL star Deon Sanders attend?\n");
   printf("\n1\tUniversity of Miami");
   printf("\n2\tCalifornia State University");
   printf("\n3\tIndiana University");
   printf("\n4\tFlorida State University");
   printf("\nEnter your selection: ");
   scanf("%d", &iAnswer);

   return iAnswer;
} // End sportsQuestion function

/*************************************************
FUNCTION DEFINITION
*************************************************/
int geographyQuestion(void) {
   int iAnswer = 0;

   system("clear");
   printf("\tGeography Question\n");
   printf("\nWhat is the state capitol of Florida?\n");
   printf("\n1\tPensecola");
   printf("\n2\tTallahassee");
   printf("\n3\tJacksonville");
   printf("\n4\tMiami");
   printf("\nEnter your selection: ");
   scanf("%d", &iAnswer);

   return iAnswer;
} // End geographyQuestion function

/*************************************************
FUNCTION DEFINITION
*************************************************/
void pause(int iNum) {
   int iCurrentTime = 0;
   int iElapsedTime = 0;

   iCurrentTime = time(NULL);

   do {
      iElapsedTime = time(NULL);
   } while ( ( iElapsedTime - iCurrentTime ) < iNum );
} // End pause function