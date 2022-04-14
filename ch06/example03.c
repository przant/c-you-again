#include <stdio.h>

int main(int argc, char const* argv[]) {
   int x;
   char cArray[5];
   char cName[] = "Olivia";

   printf("\nCharacter array not initialized:\n");

   for ( x = 0; x < 5; x++ ) {
      printf("element %d's contents are %d\n", x, cArray[x]);
   }

   printf("\nInitialized character array:\n");

   for ( x = 0; x < 6; x++ ) {
      printf("%c", cName[x]);
   }


   return 0;
}
