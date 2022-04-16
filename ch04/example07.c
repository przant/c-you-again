#include <stdio.h>

int main(int argc, char const* argv[]) {
   int iSelection = 0;

   while ( iSelection != 4 ) {
      printf("\n1\tDeposit funds\n");
      printf("2\tWithdraw funds\n");
      printf("3\tPrint Balance\n");
      printf("4\tQuit\n");
      printf("Enter your selection (1-4): ");
      scanf("%d", &iSelection);
   } // end while loop

   printf("\nThank you\n");

   return 0;
} // end main function
