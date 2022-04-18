#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Function prototypes
void encrypt(char[], int);
void decrypt(char[], int);

int main(int argc, char const* argv[]) {
   char myString[21] = { '\0' };
   int iSelection = 0;
   int iRand = 0;

   srand(time(NULL));

   iRand = ( rand() % 4 ) + 1; // Random #, 1-4

   while ( iSelection != 4 ) {
      printf("\n\n1\tEncrypt Clear Text\n");
      printf("2\tDecrypt Cipher Text\n");
      printf("3\tGenerate New Key\n");
      printf("4\tQuit\n");
      printf("\nSelect a Cryptography Option: ");
      scanf("%d", &iSelection);

      switch ( iSelection ) {
         case 1:
            printf("\nEnter one word as clear text to encrypt: ");
            scanf("%s", myString);
            encrypt(myString, iRand);
            break;

         case 2:
            printf("\nEnter cipher text to decrypt: ");
            scanf("%s", myString);
            decrypt(myString, iRand);
            break;

         case 3:
            iRand = ( rand() % 4 ) + 1; // Random #, 1-4
            printf("\nNew Key Generated %d\n", iRand);
            break;
      } // End switch
   } // End loop

   return 0;
} // End main

void encrypt(char sMessage[], int random) {
   int x = 0;

   while ( sMessage[x] ) {
      sMessage[x] += random;
      x++;
   } // End loop

   x = 0;
   printf("\nEncrypted message is: \n");

   while ( sMessage[x] ) {
      printf("%c", sMessage[x]);
      x++;
   } // End loop
} // End encrypt function

void decrypt(char sMessage[], int random) {
   int x = 0;

   while ( sMessage[x] ) {
      sMessage[x] = sMessage[x] - random;
      x++;
   } // End loop

   x = 0;

   printf("\nDecrypted Message is: ");

   // print the decrypt message
   while ( sMessage[x] ) {
      printf("%c", sMessage[x]);
      x++;
   } // end loop

   printf("\n");
} // End decrypt function