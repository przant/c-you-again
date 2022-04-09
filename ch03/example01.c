#include <stdio.h>

int main(int argc, char const *argv[]) {
   int iResponse = 0;

   printf("\tAC Control Unit\n");
   printf("1\tTurn the AC on\n");
   printf("2\tTurn the AC off\n\n");
   printf("Enter your selection: ");
   scanf("%d", &iResponse);

   if (iResponse == 1) {
      printf("\nAC is now on\n");
   }

   if (iResponse == 2) {
      printf("\nAC is now off\n");
   }

   return 0;
}
