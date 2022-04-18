#include <stdio.h>

int nameLength(char[]);

int main(int argc, char const* argv[]) {
   char aName[20] = { '\0' };

   printf("\nEnter your first name: ");
   scanf("%s", aName);

   printf("\nYour first name contains ");
   printf("%d characters\n", nameLength(aName));
   return 0;
}


int nameLength(char name[]) {
   int x = 0;
   while ( name[x] != '\0' ) {
      x++;
   }

   return x;
} // End nameLength