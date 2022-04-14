#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*****************************
 * Function prototypes
*****************************/
void displayBoard();
int verifySelection(int, int);
void checkForWin();

/*****************************
 * Global variables
*****************************/
char board[9];
char cWhoWon = ' ';
int iCurrentPlayer = 0;

/*************************************************
 * Begin Main function
*************************************************/
int main(int argc, char const* argv[]) {
   int x;
   int iSquareNum = 0;

   for ( x = 0; x < 9; x++ ) {
      board[x] = ' ';
   }

   displayBoard();

   while ( cWhoWon == ' ' ) {
      printf("\n%c\n", cWhoWon);

      if ( iCurrentPlayer == 1 || iCurrentPlayer == 0 ) {
         printf("\nPLAYER X\n");
         printf("Enter an available square number (1-9): ");
         scanf("%d", &iSquareNum);

         if ( verifySelection(iSquareNum, iCurrentPlayer) == 1 ) {
            iCurrentPlayer = 1;
         } else {
            iCurrentPlayer = 2;
         }
      } else {
         printf("\nPLAYER O\n");
         printf("Enter an available square number (1-9): ");
         scanf("%d", &iSquareNum);

         if ( verifySelection(iSquareNum, iCurrentPlayer) == 1 ) {
            iCurrentPlayer = 2;
         } else {
            iCurrentPlayer = 1;
         }
      } // End if
      displayBoard();
      checkForWin();
   } // End While loop

   return 0;
}

/**************************************************
 * Begin function definition
**************************************************/
void displayBoard() {
   system("clear");
   printf("\n\t|\t|");
   printf("\n\t|\t|");
   printf("\n%c\t|%c\t|%c", board[0], board[1], board[2]);
   printf("\n--------|-------|--------");
   printf("\n\t|\t|");
   printf("\n%c\t|%c\t|%c", board[3], board[4], board[5]);
   printf("\n--------|-------|--------");
   printf("\n\t|\t|");
   printf("\n%c\t|%c\t|%c", board[6], board[7], board[8]);
   printf("\n\t|\t|");
} // End function definition

/**************************************************
 * Begin function definition
**************************************************/
int verifySelection(int iSquare, int iPlayer) {
   if ( board[iSquare - 1] == ' ' && ( iPlayer == 1 || iPlayer == 0 ) ) {
      board[iSquare - 1] = 'X';
      return 0;
   } else if ( board[iSquare - 1] == ' ' && iPlayer == 2 ) {
      board[iSquare - 1] = 'O';
      return 0;
   } else {
      return 1;
   }
} // End function definition

/**************************************************
 * Begin function definition
**************************************************/
void checkForWin() {
   int catTotal;
   int x;
/*
 * 0 1 2
 * 3 4 5
 * 6 7 8
*/

   // Check if the player 'X' wins

   // Horizontal lines
   if ( board[0] == 'X' && board[1] == 'X' && board[2] == 'X' ) {
      cWhoWon = 'X';
   } else if ( board[3] == 'X' && board[4] == 'X' && board[5] == 'X' ) {
      cWhoWon = 'X';
   } else if ( board[6] == 'X' && board[7] == 'X' && board[8] == 'X' ) {
      cWhoWon = 'X';
   }

   // Vertical lines
   if ( board[0] == 'X' && board[3] == 'X' && board[6] == 'X' ) {
      cWhoWon = 'X';
   } else if ( board[1] == 'X' && board[4] == 'X' && board[7] == 'X' ) {
      cWhoWon = 'X';
   } else if ( board[2] == 'X' && board[5] == 'X' && board[8] == 'X' ) {
      cWhoWon = 'X';
   }

   // Diagonal lines
   if ( board[0] == 'X' && board[4] == 'X' && board[8] == 'X' ) {
      cWhoWon = 'X';
   } else if ( board[2] == 'X' && board[4] == 'X' && board[6] == 'X' ) {
      cWhoWon = 'X';
   }


   // Check if the player 'O' wins

   // Horizontal lines
   if ( board[0] == 'O' && board[1] == 'O' && board[2] == 'O' ) {
      cWhoWon = 'O';
   } else if ( board[3] == 'O' && board[4] == 'O' && board[5] == 'O' ) {
      cWhoWon = 'O';
   } else if ( board[6] == 'O' && board[7] == 'O' && board[8] == 'O' ) {
      cWhoWon = 'O';
   }

   // Vertical lines
   if ( board[0] == 'O' && board[3] == 'O' && board[6] == 'O' ) {
      cWhoWon = 'O';
   } else if ( board[1] == 'O' && board[4] == 'O' && board[7] == 'O' ) {
      cWhoWon = 'O';
   } else if ( board[2] == 'O' && board[5] == 'O' && board[8] == 'O' ) {
      cWhoWon = 'O';
   }

   // Diagonal lines
   if ( board[0] == 'O' && board[4] == 'O' && board[8] == 'O' ) {
      cWhoWon = 'O';
   } else if ( board[2] == 'O' && board[4] == 'O' && board[6] == 'O' ) {
      cWhoWon = 'O';
   }

   if ( cWhoWon == 'X' ) {
      printf("\nX Wins!\n");
      return;
   }

   if ( cWhoWon == 'O' ) {
      printf("\nO Wins!\n");
      return;
   }

   // Check for CAT / draw game
   for ( x = 0; x < 9; x++ ) {
      if ( board[x] != ' ' ) {
         catTotal += 1;
      }
   } // End for loop

   if ( catTotal == 9 ) {
      cWhoWon = 'C';
      printf("\nCAT Game!\n");
      return;
   } // End if
} // End function definition