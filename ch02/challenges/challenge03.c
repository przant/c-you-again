#include <stdio.h>

int main(int argc, char const *argv[]) {
   char cName[256] = {'\0'};

   printf("Enter your name: ");
   // fgets(cName, sizeof cName, stdin);
   scanf("%[^\n]s", cName);

   printf("Hello, %s!\n", cName);

   return 0;
}
